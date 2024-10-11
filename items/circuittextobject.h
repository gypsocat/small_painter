#ifndef CIRCUITTEXTOBJECT_H
#define CIRCUITTEXTOBJECT_H

#include "circuitbaseobject.h"
#include <QGraphicsView>
#include <QKeyEvent>
#include <QFont>
#include <QPainter>

class CircuitTextObject Q_DECL_FINAL: public CircuitBaseObject
{
public:
    explicit CircuitTextObject(CircuitBaseObject *parent = nullptr);
    explicit CircuitTextObject(const QString &text, CircuitBaseObject *parent = nullptr);

    CircuitTextObject& operator= (const CircuitTextObject&);

    ~CircuitTextObject() Q_DECL_OVERRIDE;

    QRectF boundingRect() const Q_DECL_OVERRIDE;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) Q_DECL_OVERRIDE;

    CircuitBaseObject::OBJTYPE objType() const Q_DECL_OVERRIDE { return CircuitBaseObject::Text; }

    void setText(const QString &text) {mText = text;}
    const QString text() { return mText; }
protected:
    void mouseDoubleClickEvent(QGraphicsSceneMouseEvent *event) Q_DECL_OVERRIDE;

private:
    QFont mFont;
    QString mText;
    bool IS_Edit;
};

#endif // CIRCUITTEXTOBJECT_H
