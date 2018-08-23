#ifndef DRAWSETTINGSCREEN_H
#define DRAWSETTINGSCREEN_H
#include<QPainter>
#include<QRect>

class DrawSettingScreen
{
public:
    DrawSettingScreen();
    ~DrawSettingScreen();

    void drawHomeIcon(QPainter *painter,QRect rect);
    void drawBackIcon(QPainter *painter,QRect rect);
    void drawWallPageItem(QPainter *painter ,int index);

};

#endif // DRAWSETTINGSCREEN_H
