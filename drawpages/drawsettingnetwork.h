#ifndef DRAWSETTINGNETWORK_H
#define DRAWSETTINGNETWORK_H
#include<QPainter>
#include<QRect>
#include<dataItem/wifiitem.h>
#include<QList>


class DrawSettingNetWork
{
public:
    DrawSettingNetWork();
    ~DrawSettingNetWork();

    void drawHomeIcon(QPainter *painter,QRect rect,QString iconpath);
    void drawBackIcon(QPainter *painter,QRect rect,QString iconpath);
    void drawWifiTitle(QPainter *painter,QRect rect,QString title);

    void drawWifiSwitch(QPainter *painter,bool flag,QRect rect);
    void drawWifiSearchText(QPainter *painter,QRect rect);

    void drawCurrentWifiItems(QPainter *painter,QList<wifiItem> *wifilistitem,int currentpage,int totalpages,QList<QRect> *listrect);
    void drawLastandNextpage(QPainter *painter,int currentpage,int totalpages,QRect currentpagerect,QRect totalpagerect);





private:
    QRect rect;

    void initView();
    void init();


};

#endif // DRAWSETTINGNETWORK_H
