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
    void init();
    void initView();
    void initConnection();

    QRect rect;
    int targetWidgetIndex;
    DrawMainPage *drawmainpage;

    QList<QRect> *rectlist;





};

#endif // MAINWINDOW_H
