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
    targetwidgetindex = -1;
    this->repaint();
}

void SettingAboutTablet::init()
{
    drawsettingabouttablet = new DrawSettingAboutTablet;
    initView();
}

void SettingAboutTablet::initView()
{

}


