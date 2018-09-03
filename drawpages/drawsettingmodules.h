#ifndef DRAWSETTINGMODULES_H
#define DRAWSETTINGMODULES_H
#include<QRect>
#include<QPainter>
#include"dataItem/systemitems.h"
#include<QFont>

class DrawSettingModules
{
public:
    DrawSettingModules();
    ~DrawSettingModules();

    void drawHomeIcon(QPainter *painter ,QRect rect,int iconpath);
    void drawSystemSettingText(QPainter *painter,QString text,QRect rect);

    void drawSettingItems(QPainter *painter,QList<SystemItems*> *itemlist);



private:
    QRect rect;
    void init();
    QFont font;

};

#endif // DRAWSETTINGMODULES_H
