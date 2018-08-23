#ifndef PULLDOWNWINDOW_H
#define PULLDOWNWINDOW_H

#include <QMainWindow>
#include<QMouseEvent>
#include<QPaintEvent>
#include<QRect>
#include"drawpages/drawpulldownwindow.h"
#include<QList>

class PullDownWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit PullDownWindow(QWidget *parent = 0);
    ~PullDownWindow();
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
    void paintEvent(QPaintEvent *event);

private:
    void init();
    void initView();
    QList<QRect> *rectlist;
    QRect rect;
    int targetwidgetindex;
    DrawPulldownWindow *drawpulldownwindow;

signals:

public slots:
};

#endif // PULLDOWNWINDOW_H
