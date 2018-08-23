#include "pulldownwindow.h"
#include"utils/commonutils.h"



int pulldown_rectflag[5] = {0,0,0,0,0};

PullDownWindow::PullDownWindow(QWidget *parent) : QMainWindow(parent)
{
  init();
}

PullDownWindow::~PullDownWindow()
{

}

void PullDownWindow::init()
{
    drawpulldownwindow = new DrawPulldownWindow;
    initView();
}

void PullDownWindow::initView()
{
    rectlist = new QList<QRect>;
}


void PullDownWindow::mousePressEvent(QMouseEvent *event)
{
targetwidgetindex = commonUtils::getTheTargetWidget(event->x(),event->y(),rectlist);
this->repaint();
}

void PullDownWindow::mouseMoveEvent(QMouseEvent *event)
{

}

void PullDownWindow::mouseReleaseEvent(QMouseEvent *event)
{
 targetwidgetindex = -1;
 this->repaint();
}

void PullDownWindow::paintEvent(QPaintEvent *event)
{
    QPainter *painter = new QPainter(this);

}

