#ifndef SETTINGUSBTRANSFER_H
#define SETTINGUSBTRANSFER_H

#include <QMainWindow>
#include<QMouseEvent>
#include<QPaintEvent>
#include<QRect>
#include<QList>
#include<QPainter>
#include"drawpages/drawsettingsusbtransfer.h"
#include"statusbar.h"
#include"statusbar_global.h"
#include"syssettings.h"



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
    StatusBar *statubar;
    int targetwidgetindex;
    SysSettings *mysyssetting;


   void init();
   void initConnections();
   void initView();
   DrawSettingsUsbTransfer *drawsettingusbtransfer;


signals:
   void backToHomePageSignal();

public slots:
   void clickHomeButtonSlot();


};

#endif // SETTINGUSBTRANSFER_H
