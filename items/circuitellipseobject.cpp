#include "circuitellipseobject.h"

CircuitEllipseObject::CircuitEllipseObject(CircuitEllipseObject *parent)
    : CircuitBaseObject(parent)
{

}

CircuitEllipseObject::~CircuitEllipseObject()
{

}

QRectF CircuitEllipseObject::boundingRect() const
{
    return QRectF(-10,-10,20,20);
}

void CircuitEllipseObject::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    Q_UNUSED(option); Q_UNUSED(widget);
    painter->setRenderHint(QPainter::Antialiasing, true);
    painter->setPen(gPen); /* 设置画笔颜色 */
//    painter->drawRect(this->boundingRect());
    painter->drawEllipse(this->boundingRect());

    if(this->isSelected())
        drawSelectedRect(painter);
}
