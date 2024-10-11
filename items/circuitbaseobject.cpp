#include "circuitbaseobject.h"

#include "circuittextobject.h"
#include "circuitlineobject.h"
#include "circuitrectobject.h"
#include "circuitellipseobject.h"

#include <QGraphicsView>
#include <QStyleOptionGraphicsItem>
#include <QDebug>

static const char objTypeString_string[] = {
    "Base\0"
    "Line\0"
    "Rect\0"
    "Text\0"
    "Ellipse\0"
};

static const short objTypeString_indices[] = {
    0, 5, 10, 15, 20, 28, 0
};

QColor CircuitBaseObject::gBorderColor = QColor(8,255,200);
QColor CircuitBaseObject::gObjectColor = Qt::white;
qreal CircuitBaseObject::gMoveOffset = 10;

CircuitBaseObject::CircuitBaseObject(QGraphicsObject *parent)
    : QGraphicsObject(parent)
    , bSelected(false)
    , mObjectColor(CircuitBaseObject::gObjectColor)
    , mPenWidthF(1)
{
    this->setAcceptedMouseButtons(Qt::LeftButton | Qt::RightButton);
    this->setAcceptHoverEvents(true);
    this->setFlags(  QGraphicsItem::ItemIsMovable
                   | QGraphicsItem::ItemIsSelectable
                   | QGraphicsItem::ItemIsFocusable);

    gPen.setBrush(Qt::NoBrush);
    gPen.setColor(mObjectColor);
    gPen.setWidthF(mPenWidthF);

}

CircuitBaseObject::~CircuitBaseObject()
{

}
/*
QDomText QDomNode::toText() const
{
    if (impl && impl->isText())
        return QDomText(((QDomTextPrivate*)impl));
    return QDomText();
}
*/

void CircuitBaseObject::drawSelectedRect(QPainter *painter)
{
    QRectF rect = this->boundingRect();

    painter->setPen(QPen(CircuitBaseObject::gBorderColor, 0, Qt::DashLine));
    painter->setBrush(Qt::NoBrush);

    painter->drawRect(rect.adjusted(-1, -1, 1, 1));
}

QString CircuitBaseObject::nameString() const
{
    return QLatin1String(objTypeString_string +
                         objTypeString_indices[this->objType()]);
}

void CircuitBaseObject::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    bSelected = true;
    QGraphicsView *view = this->scene()->views()[0]; /* 获取该图元所属的 view,因为这里只有一个view, 故只取第0个 */
    view->viewport()->setCursor(Qt::SizeAllCursor); /* 设置鼠标为手型 */
    return QGraphicsObject::mousePressEvent(event);
}

void CircuitBaseObject::mouseMoveEvent(QGraphicsSceneMouseEvent *event)
{
    return QGraphicsObject::mouseMoveEvent(event);
}

void CircuitBaseObject::mouseReleaseEvent(QGraphicsSceneMouseEvent *event)
{
    return QGraphicsObject::mouseReleaseEvent(event);
}

void CircuitBaseObject::hoverEnterEvent(QGraphicsSceneHoverEvent *event)
{
    gPen.setColor(Qt::red);      /* 鼠标进入图元时，图元变红色 */
    return QGraphicsObject::hoverEnterEvent(event);
}

void CircuitBaseObject::hoverLeaveEvent(QGraphicsSceneHoverEvent *event)
{
    Q_UNUSED(event);
    gPen.setColor(CircuitBaseObject::gObjectColor); /* 鼠标离开图元时，图元变原来的颜色 */
    update();
    if(!bSelected) return;
    QGraphicsView *view = this->scene()->views()[0]; /*  */
    view->viewport()->setCursor(Qt::ArrowCursor); /* 设置鼠标为箭头 */
}

void CircuitBaseObject::keyPressEvent(QKeyEvent *event)
{
    Q_UNUSED(event);
}

void CircuitBaseObject::keyReleaseEvent(QKeyEvent *event)
{
    if(!this->isSelected()) return;
    qreal offset;
    if(event->key() == Qt::Key_Space)
    {
        offset = this->rotation() + 90;
        this->setRotation(offset);
    }
    else if ((event->modifiers() == Qt::ControlModifier) && (event->key() == Qt::Key_Up)) {
        offset = this->scale() + 0.1;
        mPenWidthF += 0.1;
        this->setScale(offset);
    }
    else if ((event->modifiers() == Qt::ControlModifier) && (event->key() == Qt::Key_Down)) {
        offset = this->scale() - 0.1;
        mPenWidthF -= 0.1;
        this->setScale(offset);
    }
    else if ((event->modifiers() == Qt::ControlModifier) && (event->key() == Qt::Key_Left)) {
        offset = this->rotation() - 1;
        this->setRotation(offset);
    }
    else if ((event->modifiers() == Qt::ControlModifier) && (event->key() == Qt::Key_Right)) {
        offset = this->rotation() + 1;
        this->setRotation(offset);
    }
    else if(event->key() == Qt::Key_Up)
    {
        this->moveBy(0,-gMoveOffset);
    }
    else if(event->key() == Qt::Key_Down)
    {
        this->moveBy(0,gMoveOffset);
    }
    else if(event->key() == Qt::Key_Left)
    {
        this->moveBy(-gMoveOffset,0);
    }
    else if(event->key() == Qt::Key_Right)
    {
        this->moveBy(gMoveOffset,0);
    }
    else if(event->key() == Qt::Key_Delete)
    {
        qDebug() << "2";
        this->scene()->removeItem(this);
    }

}


