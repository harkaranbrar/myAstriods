#include "Health.h"
#include"dialog.h"
#include <QFont>
#include"mainwindow.h"

extern MainWindow * game;
//======================== Health Constructor  =======================//

Health::Health(QGraphicsItem *parent): QGraphicsTextItem(parent){

   //============= set default value for health ==============//

    health = 5;

    //======================== Draw the Health =======================//

    setPlainText(QString("Health: ") + QString::number(health)); // Health: 3
    setDefaultTextColor(Qt::red);//set color blue
    setFont(QFont("Helvetica [Cronyx]",18)); //text style
}

//==========================Decrease funtion of health =======================//

void Health::decrease(){

    health--;//decrease

    setPlainText(QString("Health: ") + QString::number(health)); // Health: 2
        if (health == 0)
        {
            game->removeItem();
            Dialog Dialog;
            Dialog.setModal(true);
            Dialog.exec();
               //qDebug() << "health 0 ";
        }
}

//========================= Getter function of health =======================//

int Health::getHealth(){

    return health;
}
