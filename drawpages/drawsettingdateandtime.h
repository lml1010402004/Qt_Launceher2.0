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

    void drawHomeIcon(QPainter *painter,QRect rect);
    void drawBackIcon(QPainter *painter,QRect rect);
    void drawDateandTimeTitle(QPainter *painter,QRect rect);
    void drawDateandTimeItems(QPainter *painter,dateModel *date,QRect daterect,QRect timerect);

    void init();

private:
    QRect rect;


};

#endif // DRAWSETTINGDATEANDTIME_H
