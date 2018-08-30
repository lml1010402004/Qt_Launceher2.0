#include "drawsettingnetwork.h"

DrawSettingNetWork::DrawSettingNetWork()
{

}

DrawSettingNetWork::~DrawSettingNetWork()
{

}

void DrawSettingNetWork::drawHomeIcon(QPainter *painter, QRect rect, QString iconpath)
{
    painter->drawPixmap(rect,iconpath);
}

void DrawSettingNetWork::drawBackIcon(QPainter *painter, QRect rect, QString iconpath)
{
    painter->drawPixmap(rect,iconpath);
}

void DrawSettingNetWork::drawWifiTitle(QPainter *painter, QRect rect, QString title)
{
    painter->drawText(rect,title);
}



void DrawSettingNetWork::drawWifiSwitch(QPainter *painter, bool flag, QRect rect)
{

}

void DrawSettingNetWork::drawWifiSearchText(QPainter *painter, QRect rect)
{

}

void DrawSettingNetWork::drawCurrentWifiItems(QPainter *painter, QList<wifiItem> *wifilistitem, int currentpage, int totalpages, QList<QRect> *listrect)
{

}

void DrawSettingNetWork::drawLastandNextpage(QPainter *painter, int currentpage, int totalpages, QRect currentpagerect, QRect totalpagerect)
{

}

void DrawSettingNetWork::initView()
{

}

void DrawSettingNetWork::init()
{

}
