#include "searchresultofbook.h"
#include"utils/commonutils.h"

int search_rectflag[5] = {0,0,0,0,0};

SearchResultOfBook::SearchResultOfBook(QWidget *parent) : QMainWindow(parent)
{
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
    targetwidgetindex = -1;
    this->repaint();
}

void SearchResultOfBook::paintEvent(QPaintEvent *event)
{
    QPainter *painter = new QPainter;


}


