#include "pulldownwindow.h"
#include"utils/commonutils.h"



int pulldown_rectflag[6] = {0,0,0,0,0,0};
const int pulldownrect[] = {120,60,0,0};
const int pulldownrect1[] = {};


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
    rectlist->append(rect);//wifi shortcut index =0

    rect.setX(pulldownrect[4]);
    rect.setY(pulldownrect[5]);
    rect.setWidth(pulldownrect[6]);
    rect.setHeight(pulldownrect[7]);
    rectlist->append(rect);//setting shortcut index =1

    rect.setX(pulldownrect[8]);
    rect.setY(pulldownrect[9]);
    rect.setWidth(pulldownrect[10]);
    rect.setHeight(pulldownrect[11]);
    rectlist->append(rect);//searching shortcut index=2

    rect.setX(pulldownrect1[0]);
    rect.setY(pulldownrect1[1]);
    rect.setWidth(pulldownrect1[2]);
    rect.setHeight(pulldownrect1[3]);
    rectlist->append(rect);//minus shortcut index =3

    rect.setX(pulldownrect1[4]);
    rect.setY(pulldownrect1[5]);
    rect.setWidth(pulldownrect1[6]);
    rect.setHeight(pulldownrect1[7]);
    rectlist->append(rect);//plus shortcut index =4

    rect.setX(pulldownrect1[8]);
    rect.setY(pulldownrect[9]);
    rect.setWidth(pulldownrect[10]);
    rect.setHeight(pulldownrect1[11]);
    rectlist->append(rect);//rectangle icon index =5


}


void PullDownWindow::mousePressEvent(QMouseEvent *event)
{
    targetwidgetindex = commonUtils::getTheTargetWidget(event->x(),event->y(),rectlist);
    if(targetwidgetindex>-1){
        pulldown_rectflag[targetwidgetindex] = -1;
        this->repaint(rectlist->at(targetwidgetindex));
    }
    this->close();
}

void PullDownWindow::mouseMoveEvent(QMouseEvent *event)
{

}

void PullDownWindow::mouseReleaseEvent(QMouseEvent *event)
{

    if(targetwidgetindex>-1){
        pulldown_rectflag[targetwidgetindex] = 0;
        switch (targetwidgetindex) {
        case 0:
            break;
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
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

//    drawpulldownwindow->drawCloseIcon(painter,rectlist[5], pulldown_rectflag[targetwidgetindex]);


}




