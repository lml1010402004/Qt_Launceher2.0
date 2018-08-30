#include "settings.h"
#include"utils/commonutils.h"

int settings_rectflag[5] = {0,0,0,0,0};



Settings::Settings(QWidget *parent) : QMainWindow(parent)
{
    this->setWindowFlags(Qt::Dialog|Qt::FramelessWindowHint);
    this->setFixedHeight(GLOBAL_SCREEN_FIXED_HEIGHT);
    this->setFixedWidth(GLOBAL_SCREEN_FIXED_WIDTH);
    init();
}

Settings::~Settings()
{
    delete rectlist,drawsettingmodules;
    rectlist = NULL;
    drawsettingmodules =NULL;
}

void Settings::mousePressEvent(QMouseEvent *event)
{
    targetwidgetindex = commonUtils::getTheTargetWidget(event->x(),event->y(),rectlist);
    this->repaint();
    this->close();
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
    statusbar->drawBattery(painter,30);
    statusbar->drawPullDownRectangle(painter);
    statusbar->drawWifiStatus(painter,true);
}

/**
 * @brief Settings::drawSettingsItems
 * @param painter
 * @param rectlist
 * @param titlelist
 * @param pathlist
 */
void Settings::drawSettingsItems(QPainter *painter)
{



}


void Settings::initView()
{
    rectlist = new QList<QRect>;
    drawsettingmodules = new DrawSettingModules;

}

void Settings::init()
{
    statusbar = new StatusBar(this);
    initView();
}

void Settings::initConnections()
{

}
