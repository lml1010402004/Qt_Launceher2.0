#ifndef DRAWSETTINGLIGHT_H
#define DRAWSETTINGLIGHT_H
#include<QPainter>
#include<QRect>

class DrawSettingLight
{
public:
    DrawSettingLight();
    ~DrawSettingLight();

    void drawHomeButton(QPainter *painter,QRect rect,int pressedflag,QString iconpath);
    void drawProgressBar(QPainter *painter,QRect rect,QString iconlightpath,QString floatpath,QRect floatrect,int lightvalue);

    void drawLightTitle(QPainter *painter,QString title,QRect rect);
    void drawBackIcon(QPainter *painter,QRect rect,QString path);


private:
    QRect rect;


};

#endif // DRAWSETTINGLIGHT_H
