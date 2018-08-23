#ifndef CONFIRMDIALOG_H
#define CONFIRMDIALOG_H
#include<QPaintEvent>
#include<QPainter>
#include<QMouseEvent>
#include<QDialog>
#include<QRect>
#include<QList>
#include"drawpages/drawconfirmdialog.h"

class ConfirmDialog:public QDialog
{
public:
    ConfirmDialog();
    ~ConfirmDialog();

    void paintEvent(QPaintEvent *event);

    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);


private:
    QRect rect;
    QList<QRect> *rectlist;
    DrawConfirmDialog *drawconfirmdialog;

    void init();
    void initView();
    int targetwidgetindex;



};

#endif // CONFIRMDIALOG_H
