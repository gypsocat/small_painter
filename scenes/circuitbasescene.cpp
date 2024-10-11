#include "CircuitBaseScene.h"
#include <QtMath>
#include <QPainter>
#include <QDebug>
#include <QGraphicsView>

int CircuitBaseScene::gGridSize = 10;
int CircuitBaseScene::gGridSquares = 5;
QColor CircuitBaseScene::gBackgroundColor = QColor("#393939");
QColor CircuitBaseScene::gForegroundColorDark = QColor("#292929");
QColor CircuitBaseScene::gForegroundColorLight = QColor("#2f2f2f");
CircuitBaseScene::CircuitBaseScene(QObject *parent)
    : QGraphicsScene(parent)
{

}

CircuitBaseScene::~CircuitBaseScene()
{

}

void CircuitBaseScene::keyPressEvent(QKeyEvent *event)
{
    QGraphicsScene::keyPressEvent(event);
}

void CircuitBaseScene::keyReleaseEvent(QKeyEvent *event)
{
    if(event->key() == Qt::Key_Delete)
    {
        QList<QGraphicsItem *> list = this->selectedItems();
        foreach(QGraphicsItem *item, list)
        {
            this->removeItem(item);
        }
    }
    else {
        QGraphicsScene::keyReleaseEvent(event);
    }
}

void CircuitBaseScene::drawBackground(QPainter *painter, const QRectF &rect)
{
    painter->setBrush(CircuitBaseScene::gBackgroundColor);
    painter->setPen(CircuitBaseScene::gBackgroundColor);
    painter->drawRect(rect);

    int left = qFloor(rect.left()); /* 向下取整 */
    int right = qCeil(rect.right()); /* 向上取整 */
    int top = qFloor(rect.top());
    int bottom = qCeil(rect.bottom());

    int _left = left - left % CircuitBaseScene::gGridSize;
    int _top  = top  - top  % CircuitBaseScene::gGridSize; /* 左上角第一个交叉点 */

    QVector<QLine> light_lines, dark_lines;
    int wh = CircuitBaseScene::gGridSize * CircuitBaseScene::gGridSquares;

    for (int i = _left; i <= right; i += CircuitBaseScene::gGridSize)
    {
        if(i % wh == 0)
            dark_lines.append(QLine(i, top, i, bottom));
        else
            light_lines.append(QLine(i, top, i, bottom));
    }

    for (int j = _top; j <= bottom; j += CircuitBaseScene::gGridSize) {
        if(j % wh == 0)
            dark_lines.append(QLine(left, j, right, j));
        else
            light_lines.append(QLine(left, j, right, j));
    }

    painter->setBrush(Qt::NoBrush);
    painter->setPen(CircuitBaseScene::gForegroundColorLight);
    painter->drawLines(light_lines);

    painter->setPen(CircuitBaseScene::gForegroundColorDark);
    painter->drawLines(dark_lines);
}

void CircuitBaseScene::mouseMoveEvent(QGraphicsSceneMouseEvent *mouseEvent)
{
    QGraphicsScene::mouseMoveEvent(mouseEvent);
}

void CircuitBaseScene::mousePressEvent(QGraphicsSceneMouseEvent *mouseEvent)
{
    QGraphicsScene::mousePressEvent(mouseEvent);
}

void CircuitBaseScene::mouseReleaseEvent(QGraphicsSceneMouseEvent *mouseEvent)
{
    QGraphicsScene::mouseReleaseEvent(mouseEvent);
}
