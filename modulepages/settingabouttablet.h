#ifndef SETTINGABOUTTABLET_H
#define SETTINGABOUTTABLET_H

#include <QMainWindow>
#include<QPaintEvent>
#include<QMouseEvent>
#include<QPainter>
#include<QList>
#include<QRect>
#include"drawpages/drawsettingabouttablet.h"

class SettingAboutTablet : public QMainWindow
{
    Q_OBJECT
public:
    explicit SettingAboutTablet(QWidget *parent = 0);
    ~SettingAboutTablet();

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
    DrawSettingAboutTablet *drawsettingabouttablet;

signals:

public slots:
};

#endif // SETTINGABOUTTABLET_H
