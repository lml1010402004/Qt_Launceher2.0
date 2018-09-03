#include "pulldownwindow.h"
#include"utils/commonutils.h"



int pulldown_rectflag[5] = {0,0,0,0,0};
const int pulldownrect[] = {0,0,0,0};


PullDownWindow::PullDownWindow(QWidget *parent) : QMainWindow(parent)
{
    this->setWindowFlags(Qt::Dialog|Qt::FramelessWindowHint);
    this->setFixedHeight(GLOBAL_SCREEN_FIXED_HEIGHT);
    this->setFixedWidth(GLOBAL_SCREEN_FIXED_WIDTH);
    init();

}

PullDownWindow::~PullDownWindow()
{
  delete rectlist;
    rectlist =NULL;
}

void PullDownWindow::init()
{
    drawpulldownwindow = new DrawPulldownWindow;
    initView();
}

void PullDownWindow::initView()
{
    rectlist = new QList<QRect>;

    rect.setX(pulldownrect[0]);
    rect.setY(pulldownrect[1]);
    rect.setWidth(pulldownrect[2]);
    rect.setHeight(pulldownrect[3]);
    rectlist->append(rect);




}


void PullDownWindow::mousePressEvent(QMouseEvent *event)
{
    targetwidgetindex = commonUtils::getTheTargetWidget(event->x(),event->y(),rectlist);
    this->repaint();
    this->close();
}

void PullDownWindow::mouseMoveEvent(QMouseEvent *event)
{

}

void PullDownWindow::mouseReleaseEvent(QMouseEvent *event)
{
    pulldown_rectflag[targetwidgetindex] = 0;
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
    this->repaint(rectlist->at(targetwidgetindex));
    targetwidgetindex = -1;

    }
}

void PullDownWindow::paintEvent(QPaintEvent *event)
{
    QPainter *painter = new QPainter(this);


}




