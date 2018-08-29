#include "mainwindow.h"
#include"application.h"
#include<QDebug>
#include"utils/commonutils.h"
#include<QBrush>

const int mainpage1[8] = {100,110,150,200,350,110,150,200};
const int mainpage2[4] ={260,430,80,40};
const int mainpage3[4] ={40,540,40,40};
const int mainpage4[12] = {90,480,120,170,240,480,120,170,390,480,120,170};
const int mainpage5[4] = {520,540,40,40};
const int mainpage6[12] = {70,700,60,60,270,700,60,60,470,700,60,60};


//assign the default value to rect.
int rectflag[11] = {0,0,0,0,0,0,0,0,0,0,0};

const QString homeiconpath = ":/mypic/pics/homeicon.png";

const QString nextpage_path = ":/mypic/pics/nextpage_rectangle.png";
const QString lastpage_path = ":/mypic/pics/lastpage_rectangle.png";
const QString unable_next_path=":/mypic/pics/unable_next.png";
const QString unable_last_path=":/mypic/pics/unable_last.png";

const QString booklibray_path=":/mypic/pics/book_library.png";
const QString bookcity = ":/mypic/pics/bookcity.png";
const QString gamepath = ":/mypic/pics/game.png";

QList<QMainWindow*> *mainwindowlist;


const QString cover_group[3] = {":/mypic/pics/txt_cover.png",":/mypic/pics/pdf_cover.png",":/mypic/pics/epub_cover.png"};


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)
{
    mainwindowlist = new QList<QMainWindow*>;
    this->setWindowFlags(Qt::Dialog|Qt::FramelessWindowHint);
    this->setFixedHeight(GLOBAL_SCREEN_FIXED_HEIGHT);
    this->setFixedWidth(GLOBAL_SCREEN_FIXED_WIDTH);
    init();
}

MainWindow::~MainWindow()
{
    delete drawmainpage,pulldownwindow,statusbar,currentbookcoverrect,threebookrect;
    drawmainpage = NULL;
    pulldownwindow = NULL;
    statusbar = NULL;
    currentbookcoverrect = NULL;
    threebookrect = NULL;

}


void MainWindow::init()
{
    getBookDataFromDataBase();
    drawmainpage = new DrawMainPage;
    pulldownwindow = new PullDownWindow(this);
    settings = new Settings(this);

    statusbar = new StatusBar(this);
    currentbookcoverrect = new QList<QRect>;
    threebookrect = new QList<QRect>;
    totaltemp = new QList<localDirectoryItem>;
    currentPagebooklist = new QList<localDirectoryItem>;

    initView();
    targetWidgetIndex =-1;
    unable_last =0;
    unable_next =0;
    initConnection();
}


void MainWindow::initView()
{

    rectlist = new QList<QRect>;

    rect.setX(mainpage1[0]);
    rect.setY(mainpage1[1]);
    rect.setWidth(mainpage1[2]);
    rect.setHeight(mainpage1[3]);
    rectlist->append(rect);//left_cover  index=0

    rect.setX(mainpage1[4]);
    rect.setY(mainpage1[5]);
    rect.setWidth(mainpage1[6]);
    rect.setHeight(mainpage1[7]);
    rectlist->append(rect);//right_cover  index =1

    rect.setX(mainpage2[0]);
    rect.setY(mainpage2[1]);
    rect.setWidth(mainpage2[2]);
    rect.setHeight(mainpage2[3]);
    rectlist->append(rect);//New Books index =2

    rect.setX(mainpage3[0]);
    rect.setY(mainpage3[1]);
    rect.setWidth(mainpage3[2]);
    rect.setHeight(mainpage3[3]);
    rectlist->append(rect);  //Last Page index=3

    rect.setX(mainpage4[0]);
    rect.setY(mainpage4[1]);
    rect.setWidth(mainpage4[2]);
    rect.setHeight(mainpage4[3]);
    rectlist->append(rect);//first book in line index =4

    rect.setX(mainpage4[4]);
    rect.setY(mainpage4[5]);
    rect.setWidth(mainpage4[6]);
    rect.setHeight(mainpage4[7]);
    rectlist->append(rect);//second book in line index =5

    rect.setX(mainpage4[8]);
    rect.setY(mainpage4[9]);
    rect.setWidth(mainpage4[10]);
    rect.setHeight(mainpage4[11]);
    rectlist->append(rect);//third book in line index =6

    rect.setX(mainpage5[0]);
    rect.setY(mainpage5[1]);
    rect.setWidth(mainpage5[2]);
    rect.setHeight(mainpage5[3]);
    rectlist->append(rect);//next page index = 7

    rect.setX(mainpage6[0]);
    rect.setY(mainpage6[1]);
    rect.setWidth(mainpage6[2]);
    rect.setHeight(mainpage6[3]);
    rectlist->append(rect);//book shelf  index =8

    rect.setX(mainpage6[4]);
    rect.setY(mainpage6[5]);
    rect.setWidth(mainpage6[6]);
    rect.setHeight(mainpage6[7]);
    rectlist->append(rect);// applications index=9

    rect.setX(mainpage6[8]);
    rect.setY(mainpage6[9]);
    rect.setWidth(mainpage6[10]);
    rect.setHeight(mainpage6[11]);
    rectlist->append(rect);//Setting index=10


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
        this->repaint(rectlist->at(targetWidgetIndex));
    }
//    if(event->y()<60){
//        pulldownwindow->show();
//    }



}

void MainWindow::mouseMoveEvent(QMouseEvent *event)
{

}

void MainWindow::mouseReleaseEvent(QMouseEvent *event)
{
    if(targetWidgetIndex>-1){
        rectflag[targetWidgetIndex] = 0;
    }


    if(targetWidgetIndex>-1){
        switch (targetWidgetIndex) {
        case 0:
            break;
        case 1:
            break;
        case 2:
            break;
        case 3:
            if(currentPageOfMainPage>1){
                unable_next = 0;
                unable_last = 0;
                currentPageOfMainPage--;
                currentPagebooklist = commonUtils::getCurrentPageBooks(totaltemp,currentPageOfMainPage,3);

            }else{
                unable_next = 0;
                unable_last =1;

            }
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            break;
        case 7:
            if(currentPageOfMainPage<totalPagesOfBooks-1){
                unable_last = 0;
                unable_next = 0;
                currentPageOfMainPage++;
                currentPagebooklist = commonUtils::getCurrentPageBooks(totaltemp,currentPageOfMainPage,3);
            }else{
                unable_next = 1;
                unable_last =0;

            }

            break;
        case 8:
            break;
        case 9:
            break;
        case 10:
            if(settings==NULL){
                settings = new Settings(this);
            }
            settings->show();
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

    QPainter *painter = new QPainter(this);
    statusbar->drawSystemTime(painter,QString("15:30"));
    statusbar->drawWifiStatus(painter,true);
    statusbar->drawPullDownRectangle(painter);
    statusbar->drawBattery(painter,80);

    //    QPainter *painter,QStringList bookCoverPath,QStringList booktitle,QList<QRect> rect)
    currentbookcoverlist.append(cover_group[0]);
    currentbookcoverlist.append(cover_group[1]);
    currentbookcovertitle.append("");
    currentbookcovertitle.append("");
    currentbookcoverrect->append(rectlist->at(0));
    currentbookcoverrect->append(rectlist->at(1));
    drawmainpage->drawCurrentBookCover(painter,currentbookcoverlist,currentbookcovertitle,currentbookcoverrect);
    drawmainpage->drawTextView(painter,rectlist->at(2),tr("NewB"));
    drawmainpage->drawNextPage(painter,rectflag[7],rectlist->at(7));

    drawmainpage->drawLastPage(painter,rectflag[3],rectlist->at(3));
    threebookrect->clear();
    threebookstringlist.clear();

    threebookrect->append(rectlist->at(4));
    threebookrect->append(rectlist->at(5));
    threebookrect->append(rectlist->at(6));
    threebookstringlist.append(cover_group[0]);
    threebookstringlist.append(cover_group[1]);
    threebookstringlist.append(cover_group[2]);
    drawmainpage->drawThreeBooksArea(painter,threebookrect,threebookstringlist);

    drawmainpage->drawThreeModulesBottom1(painter,rectflag[8],rectlist->at(8));
    drawmainpage->drawThreeModulesBottom2(painter,rectflag[9],rectlist->at(9));
    drawmainpage->drawThreeModulesBottom3(painter,rectflag[10],rectlist->at(10));





}

void MainWindow::initConnection()
{


}

void MainWindow::getBookDataFromDataBase()
{
    Database* tempdatabase = Database::getInstance();
    totaltemp =  tempdatabase->getLastTimeTableFromDatabase();
    int size = totaltemp->size();

    if(size>0){
        if(size%3==0){
            totalPagesOfBooks = size/3;
        }else{
            totalPagesOfBooks = size/3+1;
        }
        currentPageOfMainPage =1;
        currentPagebooklist = commonUtils::getCurrentPageBooks(totaltemp,currentPageOfMainPage,3);
    }


}
