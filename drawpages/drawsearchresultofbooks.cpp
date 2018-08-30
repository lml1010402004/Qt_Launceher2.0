#include "drawsearchresultofbooks.h"

DrawSearchResultOfBooks::DrawSearchResultOfBooks()
{

}

DrawSearchResultOfBooks::~DrawSearchResultOfBooks()
{

}

void DrawSearchResultOfBooks::drawHomeIcon(QPainter *painter, QRect rect, QString iconpath)
{
    painter->drawPixmap(rect,iconpath);
}

void DrawSearchResultOfBooks::drawSearchButton(QPainter *painter, QRect rect, QString buttoncontent)
{
    painter->drawText(rect,buttoncontent);
}


void DrawSearchResultOfBooks::drawSearchOutBooks(QPainter *painter, QList<localDirectoryItem> *list)
{

}

void DrawSearchResultOfBooks::drawBackIcon(QPainter *painter, QRect rect, QString backpath)
{
    painter->drawPixmap(rect,backpath);
}

