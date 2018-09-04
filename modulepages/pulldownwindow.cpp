#include "pulldownwindow.h"
#include"utils/commonutils.h"



int pulldown_rectflag[8] = {0,0,0,0,0,0,0,0};
const int pulldownrect_x[] = {120,260,400};
int pulldownrect_y=60;
const int pulldown_shortcut_w=64;
const int pulldown_shortcut_h=64;

const int minus_plus_x[] = {90,460};
const int minux_plus_y = 170;
const int minux_plus_width= 50;
const int minux_plus_height= 60;

const int rectangle_x = 280;
const int rectangle_y = 260;
const int rectangle_w = 40;
const int rectangle_h = 28;



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

    rect.setX(pulldownrect_x[0]);
    rect.setY(pulldownrect_y);
    rect.setWidth(pulldown_shortcut_w);
    rect.setHeight(pulldown_shortcut_h);
    rectlist->append(rect);//wifi shortcut index =0

    rect.setX(pulldownrect_x[1]);
    rect.setY(pulldownrect_y);
    rect.setWidth(pulldown_shortcut_w);
    rect.setHeight(pulldown_shortcut_h);
    rectlist->append(rect);//wifi shortcut index =1

    rect.setX(pulldownrect_x[2]);
    rect.setY(pulldownrect_y);
    rect.setWidth(pulldown_shortcut_w);
    rect.setHeight(pulldown_shortcut_h);
    rectlist->append(rect);//wifi shortcut index =2

    rect.setX(minus_plus_x[0]);
    rect.setY(minux_plus_y);
    rect.setWidth(minux_plus_width);
    rect.setHeight(minux_plus_height);
    rectlist->append(rect);//minus button index =3

    rect.setX(minus_plus_x[1]);
    rect.setY(minux_plus_y);
    rect.setWidth(minux_plus_width);
    rect.setHeight(minux_plus_height);
    rectlist->append(rect);//plus button index =4

    rect.setX(0);
    rect.setY(0);
    rect.setWidth(600);
    rect.setHeight(300);
    rectlist->append(rect);// up index =5

    rect.setX(0);
    rect.setY(300);
    rect.setWidth(600);
    rect.setHeight(500);
    rectlist->append(rect); // donw index =6

    rect.setX(rectangle_x);
    rect.setY(rectangle_y);
    rect.setWidth(rectangle_w);
    rect.setHeight(rectangle_h);
    rectlist->append(rect);// rectangle close index =7;



}


void PullDownWindow::mousePressEvent(QMouseEvent *event)
{
    targetwidgetindex = commonUtils::getTheTargetWidget(event->x(),event->y(),rectlist);
    if(targetwidgetindex>-1){
        pulldown_rectflag[targetwidgetindex] = 1;
        this->repaint(rectlist->at(targetwidgetindex));
    }

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


    drawpulldownwindow->drawGrayArea(painter,100,rectlist->at(6));
    drawpulldownwindow->drawLightMinus(painter,rectlist->at(3),pulldown_rectflag[3]);
    drawpulldownwindow->drawLightPlus(painter,rectlist->at(4),pulldown_rectflag[4]);
    drawpulldownwindow->drawCloseIcon(painter,rectlist->at(7));



}




