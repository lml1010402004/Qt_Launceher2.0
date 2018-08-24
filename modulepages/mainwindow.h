#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QMouseEvent>
#include<QPaintEvent>
#include<QPainter>
#include<QList>
#include<QRect>
#include<QRect>
#include"drawpages/drawmainpage.h"
#include"modulepages/pulldownwindow.h"
#include"statusbar.h"
#include"statusbar_global.h"



class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);


    void paintEvent(QPaintEvent *event);

private:
    DrawMainPage *drawmainpage;
    PullDownWindow *pulldownwindow;
    StatusBar *statusbar;

private:
    void init();
    void initView();
    void initConnection();

    QRect rect;
    int targetWidgetIndex;


    QList<QRect> *rectlist;





};

#endif // MAINWINDOW_H
