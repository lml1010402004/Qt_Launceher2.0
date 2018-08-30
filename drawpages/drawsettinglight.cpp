#include "drawsettinglight.h"
#include"application.h"
#include"utils/commonutils.h"



DrawSettingLight::DrawSettingLight()
{

}

DrawSettingLight::~DrawSettingLight()
{

}

void DrawSettingLight::drawHomeButton(QPainter *painter, QRect rect, int pressedflag,QString iconpath)
{
  painter->drawPixmap(rect,iconpath);
}

void DrawSettingLight::drawProgressBar(QPainter *painter, QRect rect, QString iconlightpath, QString floatpath, QRect floatrect,int lightvalue)
{
  painter->drawPixmap(rect,iconlightpath);
  QLine line(0,0,0,0);
  painter->drawLine(line);
  painter->drawPixmap(rect,floatpath);
}


void DrawSettingLight::drawLightTitle(QPainter *painter, QString title,QRect rect)
{
    painter->drawText(rect,title);
}

void DrawSettingLight::drawBackIcon(QPainter *painter, QRect rect, QString path)
{
   painter->drawPixmap(rect,path);
}

