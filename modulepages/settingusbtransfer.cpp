#include "settingusbtransfer.h"
#include"utils/commonutils.h"

int settingusb_rectflag[5] = {0,0,0,0,0};
QString usbstateaddress = "/sys/class/android_usb/android0/state";

extern QList<QMainWindow*> *mainwindowlist;



SettingUSBTransfer::SettingUSBTransfer(QWidget *parent) : QMainWindow(parent)
{
     mainwindowlist->append(this);
    this->setWindowFlags(Qt::Dialog|Qt::FramelessWindowHint);
    this->setFixedHeight(GLOBAL_SCREEN_FIXED_HEIGHT);
    this->setFixedWidth(GLOBAL_SCREEN_FIXED_WIDTH);
    init();
}

SettingUSBTransfer::~SettingUSBTransfer()
{

}

void SettingUSBTransfer::mousePressEvent(QMouseEvent *event)
{
    targetwidgetindex = commonUtils::getTheTargetWidget(event->x(),event->y(),rectlist);
    this->repaint();
}

void SettingUSBTransfer::mouseMoveEvent(QMouseEvent *event)
{

}

void SettingUSBTransfer::mouseReleaseEvent(QMouseEvent *event)
{
    settingusb_rectflag[targetwidgetindex] = 0;
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
        targetwidgetindex =-1;
        this->repaint();
    }

}

void SettingUSBTransfer::paintEvent(QPaintEvent *event)
{
    QPainter *painter = new QPainter;
    statubar->drawSystemTime(painter,"15:30");
    statubar->drawPullDownRectangle(painter);
}

void SettingUSBTransfer::init()
{
   statubar = new StatusBar(this);
    initView();
    initConnections();
}

void SettingUSBTransfer::initConnections()
{
 QObject::connect(this,SIGNAL(backToHomePageSignal()),this,SLOT(clickHomeButtonSlot()));
}

void SettingUSBTransfer::initView()
{
    rectlist = new QList<QRect>;

    drawsettingusbtransfer = new DrawSettingsUsbTransfer;
}

void SettingUSBTransfer::clickHomeButtonSlot()
{
  commonUtils::backToHomePageSlot();
}


