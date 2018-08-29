#include "bookshelf.h"
#include"application.h"
#include"utils/commonutils.h"
#include<QApplication>



int position1[4] = {500,48,50,50};
int bookshelf_rectflag[5] = {0,0,0,0,0};


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

    //here we should get the 9 widgets position as follows.
    rectlist = new QList<QRect>;
    rect.setX(position1[0]);
    rect.setY(position1[1]);
    rect.setWidth(position1[2]);
    rect.setHeight(position1[3]);
    rectlist->append(rect);//Home Button










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

int BookShelf::getTheTargetBookIndex(int x_pos, int y_pos)
{
   int temp = -1;

   return temp;

}

int BookShelf::getTotalPagesForEachCondition(QList<localDirectoryItem> *list){

    int temp =0;
    qDebug()<<"list.size()=="<<list->size();
    if(list->size()%9==0){
        temp = list->size()/9;
    }else{
        temp = list->size()/9+1;
    }

    qDebug()<<"totalpages--temp=="<<temp;
    return temp;
}


QList<localDirectoryItem>* BookShelf::getCurrentPageBooklist(QList<localDirectoryItem> *list, int currentpage){
    QList<localDirectoryItem> *temp = new QList<localDirectoryItem>;
    temp = commonUtils::getCurrentPageBooks(list,currentpage,9);
    return temp;
}

void BookShelf::processFinisheds(){
    QApplication::setScreenUpdateMode(QApplication::EINK_GC16_LOCAL_MODE);//刷新
    this->repaint();
    QApplication::setScreenUpdateMode(QApplication::EINK_GC16_LOCAL_MODE);//刷新
    repaint();
}
