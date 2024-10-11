#ifndef CIRCUITRECTOBJECT_H
#define CIRCUITRECTOBJECT_H

#include "circuitbaseobject.h"

#include <QPainter>

class CircuitRectObject Q_DECL_FINAL: public CircuitBaseObject
{
public:
    explicit CircuitRectObject(CircuitRectObject *parent = nullptr);
    ~CircuitRectObject() Q_DECL_OVERRIDE;

    QRectF boundingRect() const Q_DECL_OVERRIDE;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) Q_DECL_OVERRIDE;
    CircuitBaseObject::OBJTYPE objType() const  Q_DECL_OVERRIDE { return CircuitBaseObject::Rect; }

};

#endif // CIRCUITRECTOBJECT_H
