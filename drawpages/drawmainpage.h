#ifndef DRAWMAINPAGE_H
#define DRAWMAINPAGE_H

#include<QPainter>
#include<QString>

class DrawMainPage
{
public:
    DrawMainPage();
    ~DrawMainPage();

    void drawCurrentBookTitle(QPainter *painter,QString bookTitle,QRect rect);
    void drawCurrentBookCover(QPainter *painter,QString bookCoverPath,QRect rect);
    void drawCurrentBookAuthor(QPainter *painter,QString bookAuthor,QRect rect);
    void drawCurrentBookBrefContent(QPainter *painter,QString bookbrefConent,QRect rect);
    void drawCurrentBookProgress(QPainter *painter,int percentage,QRect rect);
//    void drawThreeBooksOfCurrentPage(QPainter *painter,QList<>)

    void drawLastPage(QPainter *painter,int index,QRect rect);
    void drawNextPage(QPainter *painter,int index,QRect rect);
    void drawTextView(QPainter *painter,QRect rect,int flag);
    void drawThreeModulesBottom(QPainter *painter,int index ,QRect rect);





};

#endif // DRAWMAINPAGE_H
