#ifndef DRAWCONNECTWIFIDIALOG_H
#define DRAWCONNECTWIFIDIALOG_H
#include<QRect>
#include<QPainter>

class DrawConnectWifiDialog
{
public:
    DrawConnectWifiDialog();
    ~DrawConnectWifiDialog();

    void drawWifiName(QPainter *painter,QString wifiname,QRect rect);
    void drawInputPassword(QPainter *painter,QRect rect);
    void drawTwoButtons(QPainter *painter,QRect rect,QRect rect1);

private:
    QRect rect;
};

#endif // DRAWCONNECTWIFIDIALOG_H
