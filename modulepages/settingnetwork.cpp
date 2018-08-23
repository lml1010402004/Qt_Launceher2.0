#include "settingnetwork.h"
#include"utils/commonutils.h"

int settingnet_rectflag[5] = {0,0,0,0,0};

SettingNetWork::SettingNetWork(QWidget *parent) : QMainWindow(parent)
{
    init();
}

SettingNetWork::~SettingNetWork()
{

}

void SettingNetWork::mousePressEvent(QMouseEvent *event)
{
targetwidgetindex = commonUtils::getTheTargetWidget(event->x(),event->y(),rectlist);
this->repaint();
}

void SettingNetWork::mouseMoveEvent(QMouseEvent *event)
{

}

void SettingNetWork::mouseReleaseEvent(QMouseEvent *event)
{
    targetwidgetindex =-1;
    this->repaint();

}

void SettingNetWork::paintEvent(QPaintEvent *event)
{
    QPainter *painter = new QPainter(this);

}

void SettingNetWork::init()
{
    initView();

}

void SettingNetWork::initView()
{
  rectlist = new QList<QRect>;

}
