#include "drawsettingscreen.h"

DrawSettingScreen::DrawSettingScreen()
{

}

void DrawSettingScreen::drawHomeIcon(QPainter *painter, QRect rect, QString iconpath)
{
    painter->drawPixmap(rect,iconpath);
}

void DrawSettingScreen::drawBackIcon(QPainter *painter, QRect rect, QString iconpath)
{
    painter->drawPixmap(rect,iconpath);
}


void DrawSettingScreen::drawWallPageItem(QPainter *painter, int index)
{

}
