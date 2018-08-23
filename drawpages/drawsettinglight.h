#ifndef DRAWSETTINGLIGHT_H
#define DRAWSETTINGLIGHT_H
#include<QPainter>
#include<QRect>

class DrawSettingLight
{
public:
    DrawSettingLight();
    ~DrawSettingLight();

    void drawHomeButton(QPainter *painter,QRect rect);
    void drawProgressBar(QPainter *painter,QRect rect);

    void drawLightTitle(QPainter *painter,QString title,QRect rect);
    void drawBackIcon(QPainter *painter,QRect rect);

private:
    QRect rect;


};

#endif // DRAWSETTINGLIGHT_H
