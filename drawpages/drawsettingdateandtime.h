#ifndef DRAWSETTINGDATEANDTIME_H
#define DRAWSETTINGDATEANDTIME_H
#include<QPainter>
#include<QRect>
#include"dataItem/datemodel.h"



class DrawSettingDateAndTime
{
public:
    DrawSettingDateAndTime();
    ~DrawSettingDateAndTime();

    void drawHomeIcon(QPainter *painter,QRect rect,QString iconpath);
    void drawBackIcon(QPainter *painter,QRect rect,QString iconpath);
    void drawDateandTimeTitle(QPainter *painter,QRect rect,QString title);
    void drawDateandTimeItems(QPainter *painter,dateModel *date,QRect daterect,QRect timerect);

    void init();

private:
    QRect rect;


};

#endif // DRAWSETTINGDATEANDTIME_H
