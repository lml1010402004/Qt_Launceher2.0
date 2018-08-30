#include "settingnetwork.h"
#include"utils/commonutils.h"
#include"application.h"

int settingnet_rectflag[5] = {0,0,0,0,0};
extern QString iconpath;

SettingNetWork::SettingNetWork(QWidget *parent) : QMainWindow(parent)
{
    init();
}

SettingNetWork::~SettingNetWork()
{

}


void SettingNetWork::init()
{
    initView();

}

void SettingNetWork::initView()
{
    statusbar = new StatusBar(this);
    rectlist = new QList<QRect>;
    rect.setX(60);
    rect.setY(60);
    rect.setWidth(60);
    rect.setHeight(60);
    rectlist->append(rect);
    drawsettingnetwork = new DrawSettingNetWork;

}

void SettingNetWork::mousePressEvent(QMouseEvent *event)
{
    targetwidgetindex = commonUtils::getTheTargetWidget(event->x(),event->y(),rectlist);
    settingnet_rectflag[targetwidgetindex] = 1;
    this->repaint();
}

void SettingNetWork::mouseMoveEvent(QMouseEvent *event)
{

}

void SettingNetWork::mouseReleaseEvent(QMouseEvent *event)
{
    if(targetwidgetindex>-1){
        settingnet_rectflag[targetwidgetindex] = 0;
        switch (targetwidgetindex) {
        case 0:

            break;
        default:
            break;
        }

        targetwidgetindex =-1;
        this->repaint();

    }

}

void SettingNetWork::paintEvent(QPaintEvent *event)
{
    QPainter *painter = new QPainter(this);
    statusbar->drawPullDownRectangle(painter);
    drawsettingnetwork->drawBackIcon(painter,rectlist->at(0),iconpath);

}


