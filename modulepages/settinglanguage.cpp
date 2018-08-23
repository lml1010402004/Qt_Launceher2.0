#include "settinglanguage.h"
#include"utils/commonutils.h"

int settinglanguage_rectflag[5] = {0,0,0,0,0};

SettingLanguage::SettingLanguage(QWidget *parent) : QMainWindow(parent)
{
  init();
}

SettingLanguage::~SettingLanguage()
{

}

void SettingLanguage::mousePressEvent(QMouseEvent *event)
{
targetwidgetindex = commonUtils::getTheTargetWidget(event->x(),event->y(),rectlist);
this->repaint();
}

void SettingLanguage::mouseMoveEvent(QMouseEvent *event)
{

}

void SettingLanguage::mouseReleaseEvent(QMouseEvent *event)
{
    targetwidgetindex = -1;
    this->repaint();

}

void SettingLanguage::paintEvent(QPaintEvent *event)
{
  QPainter *painter = new QPainter(this);
}

void SettingLanguage::init()
{
    initView();

}

void SettingLanguage::initView()
{
 rectlist = new QList<QRect>;

}
