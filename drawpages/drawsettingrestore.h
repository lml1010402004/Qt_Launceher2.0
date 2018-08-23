#ifndef DRAWSETTINGRESTORE_H
#define DRAWSETTINGRESTORE_H
#include<QRect>
#include<QPainter>

class DrawSettingRestore
{
public:
    DrawSettingRestore();
    ~DrawSettingRestore();

    void drawHomeIcon(QPainter *painter,QRect rect);
    void drawBackIcon(QPainter *painter,QRect rect);
    void drawRestoreTitle(QPainter *painter,QRect rect);
    void drawRestoreButtonandShutdownButton(QPainter *painter,QRect resotrerect,QRect shutdownrect);

    void init();

private:
    QRect rect;


};

#endif // DRAWSETTINGRESTORE_H
