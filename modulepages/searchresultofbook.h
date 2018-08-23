#ifndef SEARCHRESULTOFBOOK_H
#define SEARCHRESULTOFBOOK_H

#include <QMainWindow>
#include<QMouseEvent>
#include<QPaintEvent>
#include<QList>
#include<QRect>
#include<QPainter>
#include"drawpages/drawsearchresultofbooks.h"

class SearchResultOfBook : public QMainWindow
{
    Q_OBJECT
public:
    explicit SearchResultOfBook(QWidget *parent = 0);
    ~SearchResultOfBook();

    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);

    void paintEvent(QPaintEvent *event);


private:
    void initView();
    void init();
    QList<QRect> *rectlist;
    QRect rect;
    int targetwidgetindex;
    DrawSearchResultOfBooks *drawsearchresultofbooks;


signals:

public slots:
};

#endif // SEARCHRESULTOFBOOK_H
