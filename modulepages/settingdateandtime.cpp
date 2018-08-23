#include "settingdateandtime.h"
#include"utils/commonutils.h"


int settingdate_rectflag[5] = {0,0,0,0,0};

SettingDateAndTime::SettingDateAndTime(QWidget *parent) : QMainWindow(parent)
{
  init();
}

SettingDateAndTime::~SettingDateAndTime()
{

}

void SettingDateAndTime::paintEvent(QPaintEvent *event)
{
  QPainter *painter = new QPainter(this);
}

void SettingDateAndTime::mousePressEvent(QMouseEvent *event)
{
targetwidgetindex = commonUtils::getTheTargetWidget(event->x(),event->y(),rectlist);
this->repaint();
}

void SettingDateAndTime::mouseMoveEvent(QMouseEvent *event)
{

}

void SettingDateAndTime::mouseReleaseEvent(QMouseEvent *event)
{
 targetwidgetindex = -1;
 this->repaint();
}

void SettingDateAndTime::init()
{

    initView();

}

void SettingDateAndTime::initView()
{
 rectlist = new QList<QRect>;
}
