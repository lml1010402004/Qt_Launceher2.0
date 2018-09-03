#include "settings.h"
#include"utils/commonutils.h"

int settings_rectflag[5] = {0,0,0,0,0};
const int settingitems[5] = {};
extern QList<QMainWindow*> mainwindowlist;


Settings::Settings(QWidget *parent) : QMainWindow(parent)
{
    mainwindowlist.append(this);
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

void Settings::initView()
{
    rectlist = new QList<QRect>;
    drawsettingmodules = new DrawSettingModules;
    rect.setX(0);
    rect.setY(0);
    rect.setWidth(0);
    rect.setHeight(1);
    rectlist->append(rect);

}

void Settings::init()
{
    statusbar = new StatusBar(this);
    initView();
}

void Settings::initConnections()
{

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
if(targetwidgetindex>-1){
    settings_rectflag[targetwidgetindex] = 0;

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

void Settings::paintEvent(QPaintEvent *event)
{
    QPainter *painter = new QPainter(this);
    statusbar->drawBattery(painter,30);
    statusbar->drawPullDownRectangle(painter);
    statusbar->drawWifiStatus(painter,true);
    drawsettingmodules->drawHomeIcon(painter,rectlist->at(0),settings_rectflag[0]);



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



