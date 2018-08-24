#include "drawmainpage.h"
#include<QDebug>


const QString homepressed = ":/mypic/pics/home_pressed.png";
const QString homeunpressed = ":/mypic/pics/homeicon.png";


DrawMainPage::DrawMainPage()
{

}

void DrawMainPage::drawCurrentBookTitle(QPainter *painter, QString bookTitle, QRect rect)
{

}

void DrawMainPage::drawCurrentBookCover(QPainter *painter, QString bookCoverPath, QRect rect)
{
   painter->drawRect(rect);
   painter->drawPixmap(rect,bookCoverPath);
}

void DrawMainPage::drawCurrentBookAuthor(QPainter *painter, QString bookAuthor, QRect rect)
{
  painter->drawText(rect,bookAuthor);
}

void DrawMainPage::drawCurrentBookBrefContent(QPainter *painter, QString bookbrefConent, QRect rect)
{
  painter->drawText(rect,bookbrefConent);
}

void DrawMainPage::drawCurrentBookProgress(QPainter *painter, int percentage, QRect rect)
{
  painter->drawText(rect,QString::number(percentage));
}

void DrawMainPage::drawLastPage(QPainter *painter, int index, QRect rect)
{
  painter->drawRect(rect);
}

void DrawMainPage::drawNextPage(QPainter *painter, int index, QRect rect)
{
  painter->drawRect(rect);
}

void DrawMainPage::drawTextView(QPainter *painter,QRect rect,int flag)
{
    if(flag==1){
    painter->drawPixmap(rect,homepressed);
    }else{
    painter->drawPixmap(rect,homeunpressed);
    }

}

void DrawMainPage::drawThreeModulesBottom(QPainter *painter, int index, QRect rect)
{
  painter->drawRect(rect);
}
