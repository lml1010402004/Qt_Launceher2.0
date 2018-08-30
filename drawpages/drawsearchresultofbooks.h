#ifndef DRAWSEARCHRESULTOFBOOKS_H
#define DRAWSEARCHRESULTOFBOOKS_H
#include<QRect>
#include<QPainter>
#include"database/database.h"

class DrawSearchResultOfBooks
{
public:
    DrawSearchResultOfBooks();
    ~DrawSearchResultOfBooks();

    void drawHomeIcon(QPainter *painter,QRect rect,QString iconpath);
    void drawSearchButton(QPainter *painter,QRect rect,QString buttoncontent);
    void drawSearchOutBooks(QPainter *painter,QList<localDirectoryItem> *list);
    void drawBackIcon(QPainter *painter,QRect rect,QString backpath);

private:
    QRect rect;


};

#endif // DRAWSEARCHRESULTOFBOOKS_H
