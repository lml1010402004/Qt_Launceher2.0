#include "settingabouttablet.h"
#include"utils/commonutils.h"


int settingabout_rectflag[5] ={0,0,0,0,0};

SettingAboutTablet::SettingAboutTablet(QWidget *parent) : QMainWindow(parent)
{
    init();
}

SettingAboutTablet::~SettingAboutTablet(){

}

void SettingAboutTablet::paintEvent(QPaintEvent *event)
{
    QPainter *painter = new QPainter;
}

void SettingAboutTablet::mousePressEvent(QMouseEvent *event)
{
    targetwidgetindex = commonUtils::getTheTargetWidget(event->x(),event->y(),rectlist);
    this->repaint();
}

void SettingAboutTablet::mouseMoveEvent(QMouseEvent *event)
{

}

void SettingAboutTablet::mouseReleaseEvent(QMouseEvent *event)
{
    settingabout_rectflag[targetwidgetindex] = 0;
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

void SettingAboutTablet::init()
{
    drawsettingabouttablet = new DrawSettingAboutTablet;
    initView();
}

void SettingAboutTablet::initView()
{

}


