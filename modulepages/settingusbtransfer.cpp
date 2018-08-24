#include "settingusbtransfer.h"
#include"utils/commonutils.h"

int settingusb_rectflag[5] = {0,0,0,0,0};

SettingUSBTransfer::SettingUSBTransfer(QWidget *parent) : QMainWindow(parent)
{
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
}

void SettingUSBTransfer::init()
{
    initView();
}

void SettingUSBTransfer::initView()
{
    rectlist = new QList<QRect>;
    drawsettingusbtransfer = new DrawSettingsUsbTransfer;
}
