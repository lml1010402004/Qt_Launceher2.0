#include "settinglight.h"
#include"utils/commonutils.h"

int settinglight_rectflag[5] = {0,0,0,0,0};

SettingLight::SettingLight(QWidget *parent) : QMainWindow(parent)
{

    init();
}

void SettingLight::init()
{
 initView();
}

void SettingLight::initView()
{

   rectlist = new QList<QRect>;

}



SettingLight::~SettingLight()
{

}

void SettingLight::mousePressEvent(QMouseEvent *event)
{
targetwidgetindex = commonUtils::getTheTargetWidget(event->x(),event->y(),rectlist);
this->repaint();
}



void SettingLight::mouseMoveEvent(QMouseEvent *event)
{

}

void SettingLight::mouseReleaseEvent(QMouseEvent *event)
{
    targetwidgetindex = -1;
    this->repaint();

}
