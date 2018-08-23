#include "settingdateandhour.h"
#include"utils/commonutils.h"

int settingdateandhourrectflag[5] = {0,0,0,0,0};

SettingDateandHour::SettingDateandHour(QWidget *parent) : QMainWindow(parent)
{
    init();

}

SettingDateandHour::~SettingDateandHour()
{

}

void SettingDateandHour::init()
{
    initView();

}

void SettingDateandHour::initView()
{
  rectlist = new QList<QRect>;
}

void SettingDateandHour::mousePressEvent(QMouseEvent *event)
{
targetwidgetindex = commonUtils::getTheTargetWidget(event->x(),event->y(),rectlist);
this->repaint();
}

void SettingDateandHour::mouseMoveEvent(QMouseEvent *event)
{

}

void SettingDateandHour::mouseReleaseEvent(QMouseEvent *event)
{
 targetwidgetindex = -1;
 this->repaint();
}

void SettingDateandHour::paintEvent(QPaintEvent *event)
{
    QPainter *painter = new QPainter(this);

}


