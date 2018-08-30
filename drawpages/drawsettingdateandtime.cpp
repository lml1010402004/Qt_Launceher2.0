#include "drawsettingdateandtime.h"

DrawSettingDateAndTime::DrawSettingDateAndTime()
{
  init();
}

void DrawSettingDateAndTime::drawHomeIcon(QPainter *painter, QRect rect, QString iconpath)
{
  painter->drawPixmap(rect,iconpath);
}

void DrawSettingDateAndTime::drawBackIcon(QPainter *painter, QRect rect, QString iconpath)
{
  painter->drawPixmap(rect,iconpath);
}

void DrawSettingDateAndTime::drawDateandTimeTitle(QPainter *painter, QRect rect, QString title)
{
  painter->drawPixmap(rect,title);
}


void DrawSettingDateAndTime::drawDateandTimeItems(QPainter *painter, dateModel *date, QRect daterect, QRect timerect)
{

}

void DrawSettingDateAndTime::init()
{

}
