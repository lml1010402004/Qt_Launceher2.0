#ifndef DRAWSETTINGABOUTTABLET_H
#define DRAWSETTINGABOUTTABLET_H
#include<QRect>
#include<QPainter>
#include<QList>
#include<QRect>




class DrawSettingAboutTablet
{
public:
    DrawSettingAboutTablet();
    ~DrawSettingAboutTablet();

    void drawHomeIcon(QPainter *painter,QRect rect);
    void drawBackIcon(QPainter *painter,QRect rect);

    void drawAboutTableTitle(QPainter *painter,QRect rect);
    void drawInfoAboutTablet(QPainter *painter,QString SN,QString MAC,QString storage,QString VersionInfo,QList<QRect> *listrect);

    void init();

private:
    QRect rect;
};

#endif // DRAWSETTINGABOUTTABLET_H
