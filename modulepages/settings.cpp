#include "settings.h"
#include"utils/commonutils.h"

int settings_rectflag[5] = {0,0,0,0,0};

Settings::Settings(QWidget *parent) : QMainWindow(parent)
{

    init();
}

Settings::~Settings()
{

}

void Settings::mousePressEvent(QMouseEvent *event)
{
    targetwidgetindex = commonUtils::getTheTargetWidget(event->x(),event->y(),rectlist);
    this->repaint();
}

void Settings::mouseMoveEvent(QMouseEvent *event)
{

}

void Settings::mouseReleaseEvent(QMouseEvent *event)
{
    targetwidgetindex = -1;
    this->repaint();

}

void Settings::paintEvent(QPaintEvent *event)
{

}

void Settings::initView()
{
    rectlist = new QList<QRect>;

}

void Settings::init()
{
    initView();

}

void Settings::initConnections()
{

}
