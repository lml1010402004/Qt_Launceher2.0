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
    Q_OBJECT
public:
    ConnectWifiDialog(QWidget *parent=0);
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

signals:

public slots:



};

#endif // CONNECTWIFIDIALOG_H
