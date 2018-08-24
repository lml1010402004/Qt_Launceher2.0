#ifndef SETTINGUSBTRANSFER_H
#define SETTINGUSBTRANSFER_H

#include <QMainWindow>
#include<QMouseEvent>
#include<QPaintEvent>
#include<QRect>
#include<QList>
#include<QPainter>
#include"drawpages/drawsettingsusbtransfer.h"


class SettingUSBTransfer : public QMainWindow
{
    Q_OBJECT
public:
    explicit SettingUSBTransfer(QWidget *parent = 0);
    ~SettingUSBTransfer();

    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);

    void paintEvent(QPaintEvent *event);





private:
    QList<QRect> *rectlist;
    QRect rect;
    int targetwidgetindex;


   void init();
   void initView();
   DrawSettingsUsbTransfer *drawsettingusbtransfer;


signals:

public slots:
};

#endif // SETTINGUSBTRANSFER_H
