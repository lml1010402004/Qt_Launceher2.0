#include "connectwifidialog.h"
#include"utils/commonutils.h"

int connec_rectflag[5] = {0,0,0,0,0};

ConnectWifiDialog::ConnectWifiDialog()
{
    init();
}

ConnectWifiDialog::~ConnectWifiDialog()
{

}

void ConnectWifiDialog::init()
{

    drawconnectwifidialog = new DrawConnectWifiDialog;
    initView();

}

void ConnectWifiDialog::initView()
{
    rectlist = new QList<QRect>;

}


void ConnectWifiDialog::paintEvent(QPaintEvent *event)
{
   QPainter *painter = new QPainter(this);

}

void ConnectWifiDialog::mousePressEvent(QMouseEvent *event)
{
targetwidgetindex = commonUtils::getTheTargetWidget(event->x(),event->y(),rectlist);
this->repaint();
}

void ConnectWifiDialog::mouseMoveEvent(QMouseEvent *event)
{

}

void ConnectWifiDialog::mouseReleaseEvent(QMouseEvent *event)
{
  targetwidgetindex = -1;
  this->repaint();
}

