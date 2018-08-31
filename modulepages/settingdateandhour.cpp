#include "settingdateandhour.h"
#include"utils/commonutils.h"

int settingdateandhour_rectflag[5] = {0,0,0,0,0};

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
    drawsettingdateandtime = new DrawSettingDateAndTime;
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
    settingdateandhour_rectflag[targetwidgetindex] =0;
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
        this->repaint(rectlist->at(targetwidgetindex));
        targetwidgetindex = -1;

    }
}

void SettingDateandHour::paintEvent(QPaintEvent *event)
{
    QPainter *painter = new QPainter(this);

}


