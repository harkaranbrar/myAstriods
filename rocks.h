#ifndef ROCKS_H
#define ROCKS_H

#include <QMainWindow>
#include <QObject>
#include <QWidget>
#include <QGraphicsRectItem>
#include <QGraphicsScene>
#include <QGraphicsItem>
class rocks :public QObject , public QGraphicsRectItem
{
    //to receive a signals
    Q_OBJECT
public:
    rocks();
    rocks(int size);
public slots:
    void move();
    void spawn();
    void split();
private:
    int size;
    qreal xvel;
    qreal yvel;
};

#endif // ROCKS_H
