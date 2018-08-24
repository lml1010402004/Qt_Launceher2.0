#include "mainwindow.h"
#include"application.h"
#include<QDebug>
#include"utils/commonutils.h"
#include<QBrush>

const int mainpagecover[20] = {52,90,160,220,270,90,350,36,290,130,250,30,270,160,200,30,270,190,300,120};
const int draw_main_page4[4] = {230,400,80,80};

const int draw_main_page5[6] = {0,200,400,715,200,1};
const int draw_main_page6[12] = {0,715,600,1,79,720,42,39,60,765,120,42};
const int draw_main_page7[8] = {289,720,42,39,270,765,120,42};
const int draw_main_page8[8] = {479,720,42,39,470,765,120,42};

const int draw_main_page2[4] = {44,525,20,20};
const int draw_main_page3[4] = {526,525,20,20};


//assign the default value to rect.
int rectflag[15] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

const QString homeiconpath = ":/mypic/pics/homeicon.png";

const QString nextpage_path = ":/mypic/pics/nextpage_rectangle.png";
const QString lastpage_path = ":/mypic/pics/lastpage_rectangle.png";
const QString unable_next_path=":/mypic/pics/unable_next.png";
const QString unable_last_path=":/mypic/pics/unable_last.png";

const QString booklibray_path=":/mypic/pics/book_library.png";
const QString bookcity = ":/mypic/pics/bookcity.png";
const QString gamepath = ":/mypic/pics/game.png";


const QString cover_group[3] = {":/mypic/pics/txt_cover.png",":/mypic/pics/pdf_cover.png",":/mypic/pics/epub_cover.png"};


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)
{
    this->setWindowFlags(Qt::FramelessWindowHint);
    this->setFixedHeight(GLOBAL_SCREEN_FIXED_HEIGHT);
    this->setFixedWidth(GLOBAL_SCREEN_FIXED_WIDTH);
    init();
}

MainWindow::~MainWindow()
{

}


void MainWindow::init()
{
    drawmainpage = new DrawMainPage;
    pulldownwindow = new PullDownWindow(this);
    statusbar = new StatusBar(this);

    initView();
    targetWidgetIndex =-1;
    initConnection();
}


void MainWindow::initView()
{

    rectlist = new QList<QRect>;

    rect.setX(mainpagecover[0]);
    rect.setY(mainpagecover[1]);
    rect.setWidth(mainpagecover[2]);
    rect.setHeight(mainpagecover[3]);
    rectlist->append(rect);

    rect.setX(mainpagecover[0]+1);
    rect.setY(mainpagecover[1]+1);
    rect.setHeight(mainpagecover[3]-1);
    rect.setWidth(mainpagecover[2]-1);
    rectlist->append(rect);

    rect.setX(mainpagecover[4]);
    rect.setY(mainpagecover[5]);
    rect.setWidth(mainpagecover[6]);
    rect.setHeight(mainpagecover[7]);
    rectlist->append(rect);

    rect.setX(mainpagecover[4]);
    rect.setY(mainpagecover[9]);
    rect.setWidth(mainpagecover[10]);
    rect.setHeight(mainpagecover[11]);
    rectlist->append(rect);

    rect.setX(mainpagecover[4]);
    rect.setY(mainpagecover[17]);
    rect.setWidth(mainpagecover[18]);
    rect.setHeight(mainpagecover[19]);
    rectlist->append(rect);

    rect.setX(mainpagecover[4]);
    rect.setY(mainpagecover[2]);
    rect.setWidth(mainpagecover[14]);
    rect.setHeight(mainpagecover[15]);
    rectlist->append(rect);

    rect.setX(draw_main_page4[0]+15);
    rect.setY(draw_main_page4[1]);
    rect.setWidth(draw_main_page4[2]);
    rect.setHeight(draw_main_page4[3]);
    rectlist->append(rect);

    rect.setX(draw_main_page6[4]);
    rect.setY(draw_main_page6[5]);
    rect.setWidth(draw_main_page6[6]);
    rect.setHeight(draw_main_page6[7]);
    rectlist->append(rect);

    rect.setX(draw_main_page6[8]);
    rect.setY(draw_main_page6[9]);
    rect.setWidth(draw_main_page6[10]);
    rect.setHeight(draw_main_page6[11]);
    rectlist->append(rect);

    rect.setX(draw_main_page7[0]);
    rect.setY(draw_main_page7[1]);
    rect.setWidth(draw_main_page7[2]);
    rect.setHeight(draw_main_page7[3]);
    rectlist->append(rect);

    rect.setX(draw_main_page7[4]);
    rect.setY(draw_main_page7[5]);
    rect.setWidth(draw_main_page7[6]);
    rect.setHeight(draw_main_page7[7]);

    rectlist->append(rect);

    rect.setX(draw_main_page8[0]);
    rect.setY(draw_main_page8[1]);
    rect.setWidth(draw_main_page8[2]);
    rect.setHeight(draw_main_page8[3]);

    rectlist->append(rect);

    rect.setX(draw_main_page8[4]);
    rect.setY(draw_main_page8[5]);
    rect.setWidth(draw_main_page8[6]);
    rect.setHeight(draw_main_page8[7]);
    rectlist->append(rect);

    rect.setX(draw_main_page2[0]);
    rect.setY(draw_main_page2[1]);
    rect.setWidth(draw_main_page2[2]);
    rect.setHeight(draw_main_page2[3]);
    rectlist->append(rect);

    rect.setX(draw_main_page3[0]+10);
    rect.setY(draw_main_page3[1]);
    rect.setWidth(draw_main_page3[2]);
    rect.setHeight(draw_main_page3[3]);
    rectlist->append(rect);

    //assign 0 to all widgets.
    for(int i=0;i<rectlist->size();i++){
        qDebug()<<"rectflag[i]=="+QString::number(rectflag[i]);
    }

}





void MainWindow::mousePressEvent(QMouseEvent *event)
{

    targetWidgetIndex = commonUtils::getTheTargetWidget(event->x(),event->y(),rectlist);
    if(targetWidgetIndex>-1){
        rectflag[targetWidgetIndex] = 1;
        this->repaint();
    }

    if(event->y()<40){
        pulldownwindow->show();
    }

}

void MainWindow::mouseMoveEvent(QMouseEvent *event)
{

}

void MainWindow::mouseReleaseEvent(QMouseEvent *event)
{

    rectflag[targetWidgetIndex] = 0;
    if(targetWidgetIndex>-1){
        switch (targetWidgetIndex) {
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
        case 6:
            break;
        case 7:
            break;
        default:
            break;
        }
        targetWidgetIndex = -1;
        this->repaint();
    }

}

void MainWindow::paintEvent(QPaintEvent *event)
{
    QPainter *painter  = new QPainter(this);
    statusbar->drawSystemTime(painter,QString("15:30"));
    statusbar->drawWifiStatus(painter,true);
    statusbar->drawPullDownRectangle(painter);
    statusbar->drawBattery(painter,80);

    drawmainpage->drawCurrentBookAuthor(painter,"HELLO",rectlist->at(0));

    drawmainpage->drawTextView(painter,rectlist->at(6),rectflag[6]);

}

void MainWindow::initConnection()
{


}
