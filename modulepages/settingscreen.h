#ifndef SETTINGSCREEN_H
#define SETTINGSCREEN_H

#include <QMainWindow>
#include<QPaintEvent>
#include<QPainter>
#include<QMouseEvent>
#include<QRect>
#include<QList>
#include"drawpages/drawsettingscreen.h"
#include"statusbar.h"
#include"statusbar_global.h"



class SettingScreen : public QMainWindow
{
    Q_OBJECT
public:
    explicit SettingScreen(QWidget *parent = 0);
    ~SettingScreen();

    void paintEvent(QPaintEvent *event);
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);


private:
    void init();
    void initView();

    QList<QRect> *rectlist;
    QRect rect;
    int targetwidgetindex;
    DrawSettingScreen *drawsettingscreen;
    StatusBar *statusbar;

signals:

public slots:
};

#endif // SETTINGSCREEN_H
