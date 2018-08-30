#include "drawsettingabouttablet.h"

DrawSettingAboutTablet::DrawSettingAboutTablet()
{

}

void DrawSettingAboutTablet::drawHomeIcon(QPainter *painter, QRect rect, QString iconpath)
{
    painter->drawPixmap(rect,iconpath);
}

void DrawSettingAboutTablet::drawBackIcon(QPainter *painter, QRect rect, QString iconpath)
{
    painter->drawPixmap(rect,iconpath);
}

void DrawSettingAboutTablet::drawAboutTableTitle(QPainter *painter, QRect rect, QString title)
{
    painter->drawText(rect,title);
}
