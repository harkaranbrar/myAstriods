#include "bullet.h"
#include <QTimer>

bullet::bullet()
{

    //Draw the bullet
        setRect (0,0,5,25);
        //connect the bullet
        QTimer * timer = new QTimer();
        connect(timer,SIGNAL(timeout()),this,SLOT(move()));

        timer->start(50);
}
void bullet::move(){
    //move bullet up
    setPos(x(),y()-10);
}
