#ifndef BOOKSHELF_H
#define BOOKSHELF_H

#include <QMainWindow>
#include<QPainter>
#include<QMouseEvent>
#include<QRect>
#include<QList>
#include"drawpages/drawbookshelf.h"
#include<dataItem/conditionitem.h>
//#include<database/database.h>
#include"statusbar.h"
#include"statusbar_global.h"

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

    int getTheTargetBookIndex(int x_pos,int y_pos);



private:
    int current_page;
    int total_pages;
    int condition_selected_index;
    QRect rect;
    ConditionItem conditionitem;
    QList<QRect> *rectlist;
    int targetwidgetindex;
    StatusBar *statusbar;
    DrawBookshelf *drawbookshelf;
    QList<ConditionItem> *conditonsItemlist;
    QList<QString> list;
    QList<localDirectoryItem> *totalbookinfolist;
    QList<localDirectoryItem> *currentpagebookinfolist;

    void init();
    void initView();

    void initConnection();
    QList<localDirectoryItem>* getCurrentPageBooklist(QList<localDirectoryItem> *list,int currentpage);
    int getTotalPagesForEachCondition(QList<localDirectoryItem> *list);
    void processFinisheds();

signals:
    void updateDataSignal();

public slots:
    void updateDataSlot();
};

#endif // BOOKSHELF_H
