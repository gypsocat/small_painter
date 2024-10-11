#ifndef CIRCULTBASEITEM_H
#define CIRCULTBASEITEM_H

#include <QGraphicsObject>
#include <QKeyEvent>
#include <QPen>

class CircuitBaseObject: public QGraphicsObject
{
public:

    enum OBJTYPE{
        Base,
        Line,
        Rect,
        Text,
        Ellipse,
    };
    Q_ENUM(OBJTYPE)
    explicit CircuitBaseObject(QGraphicsObject *parent = nullptr);
    ~CircuitBaseObject() override;

    // Dynamic cast
    bool isLine() const                     { return objType() == CircuitBaseObject::Line; }
    bool isRect() const                     { return objType() == CircuitBaseObject::Rect; }
    bool isText() const                     { return objType() == CircuitBaseObject::Text; }
    bool isEllipse() const                  { return objType() == CircuitBaseObject::Ellipse; }

    virtual void drawSelectedRect(QPainter *painter); /* 画虚线框 */
    virtual CircuitBaseObject::OBJTYPE objType() const { return CircuitBaseObject::Base; }
    QString nameString() const;

    static QColor gBorderColor; /* 虚线框颜色 */
    static QColor gObjectColor; /* 图元颜色 */
    static qreal gMoveOffset; /* 每次移动的偏移量 */
    QPen gPen;


protected: 
    virtual void hoverEnterEvent(QGraphicsSceneHoverEvent *event) override;
    virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent *event) override;
    virtual void keyPressEvent(QKeyEvent *event) override;
    virtual void keyReleaseEvent(QKeyEvent *event) override;
    virtual void mousePressEvent(QGraphicsSceneMouseEvent *event) override;
    virtual void mouseMoveEvent(QGraphicsSceneMouseEvent *event) override;
    virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent *event) override;



private:
    bool bSelected; /* 图元是否被选中 */
    QColor mObjectColor;
    qreal mPenWidthF;

};

#endif // CIRCULTBASEITEM_H
