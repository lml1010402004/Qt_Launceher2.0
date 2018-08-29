#include "settinglight.h"
#include"utils/commonutils.h"
#include"application.h"

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
   drawsettinglight = new DrawSettingLight;

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
    settinglight_rectflag[targetwidgetindex] =0;
    if(targetwidgetindex>-1){
        switch (targetwidgetindex) {
        case 0:
            break;
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        default:
            break;
        }
        targetwidgetindex = -1;
        this->repaint();
    }


}
