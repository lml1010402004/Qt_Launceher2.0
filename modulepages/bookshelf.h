#ifndef BOOKSHELF_H
#define BOOKSHELF_H

#include <QMainWindow>
#include<QPainter>
#include<QMouseEvent>
#include<QRect>
#include<QList>
#include"drawpages/drawbookshelf.h"


class BookShelf : public QMainWindow
{
    Q_OBJECT
public:
    explicit BookShelf(QWidget *parent = 0);
    ~BookShelf();

    void paintEvent(QPaintEvent *event);
    void mousePressEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);

    void getTheTargetBookIndex(int x_pos,int y_pos);

private:

    QRect rect;
    QList<QRect> *rectlist;
    int targetwidgetindex;
    DrawBookshelf *drawbookshelf;

    void init();
    void initView();

    void initConnection();


signals:

public slots:
};

#endif // BOOKSHELF_H
