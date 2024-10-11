#include "circuittextobject.h"

#include <QInputDialog>
#include <QDir>

CircuitTextObject::CircuitTextObject(CircuitBaseObject *parent)
    : CircuitBaseObject(parent)
    , mText("Text")
{
    mFont.setPixelSize(8);
}

CircuitTextObject::CircuitTextObject(const QString &text, CircuitBaseObject *parent)
    : CircuitBaseObject(parent)
    , mText(text)
{

}

CircuitTextObject &CircuitTextObject::operator=(const CircuitTextObject &obj)
{
    this->mFont = obj.mFont;
    this->mText = obj.mText;
    this->IS_Edit = obj.IS_Edit;
    return *this;
}

CircuitTextObject::~CircuitTextObject()
{

}

QRectF CircuitTextObject::boundingRect() const
{
    int size = mFont.pixelSize();
    int count = mText.size();
    return QRectF(-size/2*count/2,-size/2,size*count/2,size);
}

void CircuitTextObject::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    Q_UNUSED(widget); Q_UNUSED(option);

    painter->setRenderHint(QPainter::TextAntialiasing, true);
    painter->setPen(gPen);
    painter->setFont(mFont);
    painter->drawText(this->boundingRect(), mText);

    if(this->CircuitBaseObject::isSelected())
        drawSelectedRect(painter);
}

void CircuitTextObject::mouseDoubleClickEvent(QGraphicsSceneMouseEvent *event)
{
    Q_UNUSED(event);
    bool ok;
    QString text = QInputDialog::getText(nullptr, nullptr,
                                        tr("Input:"), QLineEdit::Normal,nullptr, &ok);
    if (ok && !text.isEmpty())
    {
        mText = text;
        update();
    }
}


