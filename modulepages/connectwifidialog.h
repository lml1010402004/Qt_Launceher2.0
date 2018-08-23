#ifndef CONNECTWIFIDIALOG_H
#define CONNECTWIFIDIALOG_H
#include<QDialog>
#include<QPaintEvent>
#include<QPainter>
#include<QList>
#include<QRect>
#include"drawpages/drawconnectwifidialog.h"

class ConnectWifiDialog:public QDialog
{
public:
    ConnectWifiDialog();
    ~ConnectWifiDialog();



    void paintEvent(QPaintEvent *event);
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);

private:
    QList<QRect> *rectlist;

    void init();
    void initView();
    int targetwidgetindex;
    DrawConnectWifiDialog *drawconnectwifidialog;


};

#endif // CONNECTWIFIDIALOG_H
