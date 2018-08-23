#include "settingusbtransfer.h"
#include"utils/commonutils.h"

int settingusb_rectflag[5] = {0,0,0,0,0};

SettingUSBTransfer::SettingUSBTransfer(QWidget *parent) : QMainWindow(parent)
{
 init();
}

SettingUSBTransfer::~SettingUSBTransfer()
{

}

void SettingUSBTransfer::mousePressEvent(QMouseEvent *event)
{
targetwidgetindex = commonUtils::getTheTargetWidget(event->x(),event->y(),rectlist);
this->repaint();
}

void SettingUSBTransfer::mouseMoveEvent(QMouseEvent *event)
{

}

void SettingUSBTransfer::mouseReleaseEvent(QMouseEvent *event)
{
    targetwidgetindex =-1;
    this->repaint();

}

void SettingUSBTransfer::paintEvent(QPaintEvent *event)
{
  QPainter *painter = new QPainter;
}

void SettingUSBTransfer::init()
{
 initView();
}

void SettingUSBTransfer::initView()
{
  rectlist = new QList<QRect>;
}
