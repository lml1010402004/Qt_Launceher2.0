#include "searchresultofbook.h"
#include"utils/commonutils.h"

int search_rectflag[5] = {0,0,0,0,0};
extern QList<QMainWindow*> *mainwindowlist;

SearchResultOfBook::SearchResultOfBook(QWidget *parent) : QMainWindow(parent)
{
    mainwindowlist->append(this);
    this->setWindowFlags(Qt::Dialog|Qt::FramelessWindowHint);
    this->setFixedHeight(GLOBAL_SCREEN_FIXED_HEIGHT);
    this->setFixedWidth(GLOBAL_SCREEN_FIXED_WIDTH);
    init();
}

SearchResultOfBook::~SearchResultOfBook()
{

}

void SearchResultOfBook::initView()
{

    rectlist = new QList<QRect>;

}

void SearchResultOfBook::init()
{
    drawsearchresultofbooks  = new DrawSearchResultOfBooks;
    initView();
}

void SearchResultOfBook::mousePressEvent(QMouseEvent *event)
{
    targetwidgetindex = commonUtils::getTheTargetWidget(event->x(),event->y(),rectlist);
    this->repaint();
}

void SearchResultOfBook::mouseMoveEvent(QMouseEvent *event)
{

}

void SearchResultOfBook::mouseReleaseEvent(QMouseEvent *event)
{
    search_rectflag[targetwidgetindex] =0;
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

void SearchResultOfBook::paintEvent(QPaintEvent *event)
{
    QPainter *painter = new QPainter;


}


