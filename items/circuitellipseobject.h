#ifndef CIRCUITELLIPSEOBJECT_H
#define CIRCUITELLIPSEOBJECT_H


#include "circuitbaseobject.h"

#include <QPainter>

class CircuitEllipseObject Q_DECL_FINAL: public CircuitBaseObject
{
public:
    explicit CircuitEllipseObject(CircuitEllipseObject *parent = nullptr);
    ~CircuitEllipseObject() Q_DECL_OVERRIDE;
    QRectF boundingRect() const Q_DECL_OVERRIDE;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) Q_DECL_OVERRIDE;

    CircuitBaseObject::OBJTYPE objType() const Q_DECL_OVERRIDE { return CircuitBaseObject::Ellipse; }
};

#endif // CIRCUITELLIPSEOBJECT_H
