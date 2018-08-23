#ifndef DRAWCONFIRMDIALOG_H
#define DRAWCONFIRMDIALOG_H
#include<QWidget>
#include<QRect>

class DrawConfirmDialog
{
public:
    DrawConfirmDialog(QWidget *parent);
    ~DrawConfirmDialog();

    void drawConfirmDialogTitle(QPainter *painter,int title,QRect rect);
    void drawYesandNoButtons(QPainter *painter, QRect yesrect,QRect norect);


};

#endif // DRAWCONFIRMDIALOG_H
