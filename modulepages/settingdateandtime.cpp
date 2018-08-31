#include "settingdateandtime.h"
#include"utils/commonutils.h"


int settingdate_rectflag[5] = {0,0,0,0,0};
extern QString iconpath="";

SettingDateAndTime::SettingDateAndTime(QWidget *parent) : QMainWindow(parent)
{
    init();
}

SettingDateAndTime::~SettingDateAndTime()
{

}

void SettingDateAndTime::init()
{

    initView();

}

void SettingDateAndTime::initView()
{
    drawsettingdateandtime = new DrawSettingDateAndTime;
    rectlist = new QList<QRect>;
    rect.setX(60);
    rect.setY(60);
    rect.setWidth(60);
    rect.setHeight(60);
    rectlist->append(rect);
}

void SettingDateAndTime::paintEvent(QPaintEvent *event)
{
    QPainter *painter = new QPainter(this);
    statusbar->drawPullDownRectangle(painter);
    drawsettingdateandtime->drawBackIcon(painter,rectlist->at(0),iconpath);
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
  if(targetwidgetindex>-1){
    settingdate_rectflag[targetwidgetindex] = 0;
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


