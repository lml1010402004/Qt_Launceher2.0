#ifndef DRAWSETTINGMODULES_H
#define DRAWSETTINGMODULES_H
#include<QRect>
#include<QPainter>

class DrawSettingModules
{
public:
    DrawSettingModules();
    ~DrawSettingModules();

    void drawHomeIcon(QPainter *painter ,QRect rect);
    void drawSystemSettingText(QPainter *painter,QString text,QRect rect);

    void drawSettingItems(QPainter *painter);



private:
    QRect rect;
    void init();
    void initView();

};

#endif // DRAWSETTINGMODULES_H
