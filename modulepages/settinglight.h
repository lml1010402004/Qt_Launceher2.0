#ifndef SETTINGLIGHT_H
#define SETTINGLIGHT_H

#include <QMainWindow>
#include<QPaintEvent>
#include<QMouseEvent>
#include<QRect>
#include<QList>
#include"drawpages/drawsettinglight.h"
#include"statusbar.h"
#include"statusbar_global.h"

class SettingLight : public QMainWindow
{
    Q_OBJECT
public:
    explicit SettingLight(QWidget *parent = 0);
    ~SettingLight();

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
    DrawSettingLight *drawsettinglight;
    StatusBar *statusbar;

signals:

public slots:
};

#endif // SETTINGLIGHT_H
