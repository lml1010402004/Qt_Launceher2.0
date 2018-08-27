#include "drawmainpage.h"
#include<QDebug>


const QString homepressed = ":/mypic/pics/home_pressed.png";
const QString homeunpressed = ":/mypic/pics/homeicon.png";
const QString lastpageunpressed = ":/mypic/pics/back_unpressed.png";
const QString nextpagepressed=":/mypic/pics/forward_pressed.png";
const QString lastpagepressed=":/mypic/pics/back_pressed.png";
const QString nextpageunpressed=":/mypic/pics/forward_unpressed.png";


const QString bookshelf=":/mypic/pics/bookshelf.png";
const QString application=":/mypic/pics/application.png";
const QString setting = ":/mypic/pics/setting.png";

const QString bookshelf_pressed=":/mypic/pics/bookshelf_pressed.png";
const QString application_pressed=":/mypic/pics/application_pressed.png";
const QString setting_pressed=":/mypic/pics/setting_pressed.png";



DrawMainPage::DrawMainPage()
{

}

DrawMainPage::~DrawMainPage()
{

}


void DrawMainPage::drawCurrentBookCover(QPainter *painter,QStringList bookCoverPath,QStringList booktitle,QList<QRect> *rect)
{

    painter->drawRect(rect->at(0));
    painter->drawPixmap(rect->at(0),bookCoverPath.at(0));
    if(booktitle.at(0).length()>0){

    }

    painter->drawRect(rect->at(1));
    painter->drawPixmap(rect->at(1),bookCoverPath.at(1));
    if(booktitle.at(1).length()>0){

    }






}

void DrawMainPage::drawCurrentBookAuthor(QPainter *painter, QString bookAuthor, QRect rect)
{
    painter->drawText(rect,bookAuthor);
}


void DrawMainPage::drawCurrentBookProgress(QPainter *painter, int percentage, QRect rect)
{
    painter->drawText(rect,QString::number(percentage));
}

void DrawMainPage::drawLastPage(QPainter *painter, int index, QRect rect)
{
    if(index==0){
        painter->drawPixmap(rect,lastpageunpressed);
    }else if(index==1){
        painter->drawPixmap(rect,lastpagepressed);
    }

}

void DrawMainPage::drawNextPage(QPainter *painter, int index, QRect rect)
{
    if(index==0){
        painter->drawPixmap(rect,nextpageunpressed);
    }else if(index==1){
        painter->drawPixmap(rect,nextpagepressed);
    }
}

void DrawMainPage::drawTextView(QPainter *painter,QRect rect,QString title)
{

    painter->drawText(rect,title);

}

void DrawMainPage::drawThreeModulesBottom1(QPainter *painter, int index, QRect rect)
{
   if(index==1){
        painter->drawPixmap(rect,bookshelf_pressed);
   }else{
       painter->drawPixmap(rect,bookshelf);
   }

}

void DrawMainPage::drawThreeModulesBottom2(QPainter *painter, int index, QRect rect)
{
    if(index==1){
         painter->drawPixmap(rect,application_pressed);
    }else{
        painter->drawPixmap(rect,application);
    }

}

void DrawMainPage::drawThreeModulesBottom3(QPainter *painter, int index, QRect rect)
{
    if(index==1){
         painter->drawPixmap(rect,setting_pressed);
    }else{
        painter->drawPixmap(rect,setting);
    }

}

void DrawMainPage::drawThreeBooksArea(QPainter *painter, QList<QRect> *rectlist, QStringList bookcoverlist)
{
    for(int i=0;i<rectlist->size();i++){
        painter->drawRect(rectlist->at(i));
        painter->drawPixmap(rectlist->at(i),bookcoverlist.at(i));
    }

}
