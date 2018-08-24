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

    settings_rectflag[targetwidgetindex] = 0;
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

void Settings::paintEvent(QPaintEvent *event)
{
    QPainter *painter = new QPainter(this);
}

void Settings::initView()
{
    rectlist = new QList<QRect>;
    drawsettingmodules = new DrawSettingModules;

}

void Settings::init()
{
    initView();

}

void Settings::initConnections()
{

}
