#ifndef DRAWSWITCHLANGUAGEDIALOG_H
#define DRAWSWITCHLANGUAGEDIALOG_H
#include<QRect>
#include<QPainter>
#include<QList>

class DrawSwitchLanguageDialog
{
public:
    DrawSwitchLanguageDialog();
    ~DrawSwitchLanguageDialog();

    void drawLanguageContent(QPainter *painter,QList<QString> *list,QList<QRect>);

    void drawRect(QPainter *painter,QRect rect);




private:
    QRect rect;
};

#endif // DRAWSWITCHLANGUAGEDIALOG_H
