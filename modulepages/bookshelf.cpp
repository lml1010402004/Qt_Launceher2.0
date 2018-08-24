#include "bookshelf.h"
#include"application.h"
#include"utils/commonutils.h"


int position1[8] = {0,96,600,96,500,50,30,29};
int position2[4] = {55,110,60,40};
int bookshelf_rectflag[] = {0,0,0,0};

BookShelf::BookShelf(QWidget *parent) : QMainWindow(parent)
{

    this->setWindowFlags(Qt::Dialog|Qt::FramelessWindowHint);
    this->setFixedHeight(GLOBAL_SCREEN_FIXED_HEIGHT);
    this->setFixedWidth(GLOBAL_SCREEN_FIXED_WIDTH);
    init();

}

BookShelf::~BookShelf()
{

}

void BookShelf::init(){
    drawbookshelf = new DrawBookshelf;

    initView();
    initConnection();
}

void BookShelf::initView(){
    rectlist->clear();
    rect.setX(position1[4]);
    rect.setY(position1[5]);
    rect.setWidth(position1[6]);
    rect.setHeight(position1[7]);
    rectlist->append(rect);//Home Button

    rect.setX(position2[0]);
    rect.setY(position2[1]);
    rect.setWidth(position2[2]);
    rect.setHeight(position2[3]);
    rectlist->append(rect);//ArrageTextView



}

void BookShelf::initConnection(){

}

void BookShelf::paintEvent(QPaintEvent *event)
{
    QPainter *painter = new QPainter(this);

}

void BookShelf::mousePressEvent(QMouseEvent *event)
{
    targetwidgetindex = commonUtils::getTheTargetWidget(event->x(),event->y(),rectlist);


    this->repaint();
}

void BookShelf::mouseReleaseEvent(QMouseEvent *event)
{

    bookshelf_rectflag[targetwidgetindex] =0;
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
        case 4:
            break;
        default:
            break;
        }
    targetwidgetindex = -1;
    this->repaint();
    }

}

void BookShelf::mouseMoveEvent(QMouseEvent *event)
{

}

void BookShelf::getTheTargetBookIndex(int x_pos, int y_pos)
{

}
