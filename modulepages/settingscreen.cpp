#include "settingscreen.h"
#include"utils/commonutils.h"

int settingscreen_rectflag[5] = {0,0,0,0,0};

SettingScreen::SettingScreen(QWidget *parent) : QMainWindow(parent)
{
  init();
}

SettingScreen::~SettingScreen()
{

}

void SettingScreen::paintEvent(QPaintEvent *event)
{
  QPainter *painter = new QPainter(this);
}

void SettingScreen::mousePressEvent(QMouseEvent *event)
{
  targetwidgetindex = commonUtils::getTheTargetWidget(event->x(),event->y(),rectlist);
  this->repaint();
}

void SettingScreen::init()
{

    initView();
}

void SettingScreen::initView()
{
    rectlist = new QList<QRect>;

}

void SettingScreen::mouseMoveEvent(QMouseEvent *event)
{

}

void SettingScreen::mouseReleaseEvent(QMouseEvent *event)
{
    targetwidgetindex = -1;
    this->repaint();

}
