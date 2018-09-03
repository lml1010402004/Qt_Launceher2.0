#include "settinglight.h"
#include"utils/commonutils.h"
#include"application.h"

int settinglight_rectflag[5] = {0,0,0,0,0};

QString iconpath2 = "";

SettingLight::SettingLight(QWidget *parent) : QMainWindow(parent)
{
    init();
}

void SettingLight::init()
{
 initView();
}

void SettingLight::initView()
{
   statusbar = new StatusBar(this);
   drawsettinglight = new DrawSettingLight;
   rectlist = new QList<QRect>;
   rect.setX(60);
   rect.setY(60);
   rect.setWidth(60);
   rect.setHeight(60);
   rectlist->append(rect);

}



SettingLight::~SettingLight()
{

}

void SettingLight::paintEvent(QPaintEvent *event){

    QPainter *painter = new QPainter(this);
    statusbar->drawPullDownRectangle(painter);
    drawsettinglight->drawBackIcon(painter,rectlist->at(0),iconpath2);
    drawsettinglight->drawHomeButton(painter,rectlist->at(0),settinglight_rectflag[0],iconpath2);
    drawsettinglight->drawProgressBar(painter,rectlist->at(0),iconpath2,iconpath2,rectlist->at(0),100);


}

void SettingLight::mousePressEvent(QMouseEvent *event)
{
targetwidgetindex = commonUtils::getTheTargetWidget(event->x(),event->y(),rectlist);
this->repaint();
}

void SettingLight::mouseMoveEvent(QMouseEvent *event)
{

}

void SettingLight::mouseReleaseEvent(QMouseEvent *event)
{
     if(targetwidgetindex>-1){
    settinglight_rectflag[targetwidgetindex] =0;

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
