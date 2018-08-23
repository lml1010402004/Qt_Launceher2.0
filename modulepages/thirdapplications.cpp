#include "thirdapplications.h"
#include"application.h"
#include"utils/commonutils.h"

int thirdapprect[5] = {0,0,0,0,0};

ThirdApplications::ThirdApplications(QWidget *parent) : QMainWindow(parent)
{

    this->setWindowFlags(Qt::Dialog|Qt::FramelessWindowHint);
    this->setFixedHeight(SCREEN_FIXED_HEIGHT);
    this->setFixedWidth(SCREEN_FIXED_WIDTH);
    init();
}

ThirdApplications::~ThirdApplications()
{

}

void ThirdApplications::init()
{
    initView();
    mydrawapplication = new DrawThirdApplication;
    targetwidgetindex = -1;
}

void ThirdApplications::initView()
{
    rectlist = new QList<QRect>;

}

void ThirdApplications::paintEvent(QPaintEvent *event)
{
    QPainter *painter = new QPainter;

}

void ThirdApplications::mousePressEvent(QMouseEvent *event)
{
targetwidgetindex = commonUtils::getTheTargetWidget(event->x(),event->y(),rectlist);
this->repaint();
}

void ThirdApplications::mouseMoveEvent(QMouseEvent *event)
{

}

void ThirdApplications::mouseReleaseEvent(QMouseEvent *event)
{
targetwidgetindex = -1;
this->repaint();
}


