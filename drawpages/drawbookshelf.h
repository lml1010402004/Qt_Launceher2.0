#ifndef DRAWBOOKSHELF_H
#define DRAWBOOKSHELF_H
#include<QPainter>
#include<QString>
#include"dataItem/conditionitem.h"
#include"database/database.h"

class DrawBookshelf
{
public:
    DrawBookshelf();
    ~DrawBookshelf();
    void drawHomeButton(QPainter *painter,bool flag);
    void drawArrangeTextView(QPainter *painter,QString str);
    void drawSelectedCondition(QPainter *painter,QList<ConditionItem> *conditionlist,int index);
    void drawNineBooks(QPainter *painter,QList<localDirectoryItem> *booklist);

    void drawTheFirstandLastPageIcon(QPainter *painter,QRect firstrect,QRect lastrect);
    void drawTheNextandEndPageIcon(QPainter *painter,QRect nextrect,QRect endrect);
    void drawCurrentPageandTotalPages(QPainter *painter,int currentpage,int totalpages,QRect rect);


};

#endif // DRAWBOOKSHELF_H
