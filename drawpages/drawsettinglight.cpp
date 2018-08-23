#include "drawsettinglight.h"
#include"application.h"
#include"utils/commonutils.h"

extern QString HOME_PIC_PATH;

DrawSettingLight::DrawSettingLight()
{

}

DrawSettingLight::~DrawSettingLight()
{

}

void DrawSettingLight::drawHomeButton(QPainter *painter, QRect rect)
{
 painter->drawPixmap(rect,HOME_PIC_PATH);
}

void DrawSettingLight::drawProgressBar(QPainter *painter, QRect rect)
{

}

void DrawSettingLight::drawLightTitle(QPainter *painter, QString title,QRect rect)
{
painter->drawText(rect,title);
}

void DrawSettingLight::drawBackIcon(QPainter *painter, QRect rect)
{


}
