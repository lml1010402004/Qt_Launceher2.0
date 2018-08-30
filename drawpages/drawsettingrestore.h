#ifndef DRAWSETTINGRESTORE_H
#define DRAWSETTINGRESTORE_H
#include<QRect>
#include<QPainter>

class DrawSettingRestore
{
public:
    DrawSettingRestore();
    ~DrawSettingRestore();

    void drawHomeIcon(QPainter *painter,QRect rect,QString iconpath);
    void drawBackIcon(QPainter *painter,QRect rect,QString iconpath);
    void drawRestoreTitle(QPainter *painter,QRect rect,QString title);
    void drawRestoreButtonandShutdownButton(QPainter *painter,QRect resotrerect,QRect shutdownrect);


private:
    QRect rect;


};

#endif // DRAWSETTINGRESTORE_H
