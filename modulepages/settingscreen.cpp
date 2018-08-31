#include "settingscreen.h"
#include"utils/commonutils.h"

int settingscreen_rectflag[5] = {0,0,0,0,0};
QString iconpath1 = "";

SettingScreen::SettingScreen(QWidget *parent) : QMainWindow(parent)
{
    init();
}

void SettingScreen::init()
{

    initView();
}

void SettingScreen::initView()
{
    statusbar = new StatusBar(this);
    rectlist = new QList<QRect>;
    rect.setX(60);
    rect.setY(60);
    rect.setWidth(60);
    rect.setHeight(60);
    rectlist->append(rect);

    drawsettingscreen = new DrawSettingScreen;

}


SettingScreen::~SettingScreen()
{

}

void SettingScreen::paintEvent(QPaintEvent *event)
{
    QPainter *painter = new QPainter(this);
    statusbar->drawPullDownRectangle(painter);
    drawsettingscreen->drawBackIcon(painter,rectlist->at(0),iconpath1);

}

void SettingScreen::mousePressEvent(QMouseEvent *event)
{
    targetwidgetindex = commonUtils::getTheTargetWidget(event->x(),event->y(),rectlist);
    this->repaint();
}


void SettingScreen::mouseMoveEvent(QMouseEvent *event)
{

}

void SettingScreen::mouseReleaseEvent(QMouseEvent *event)
{
    if(targetwidgetindex>-1){
        settingscreen_rectflag[targetwidgetindex] = 0;

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
