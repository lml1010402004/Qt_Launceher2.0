#ifndef SETTINGDATEANDHOUR_H
#define SETTINGDATEANDHOUR_H

#include <QMainWindow>
#include<QPaintEvent>
#include<QMouseEvent>
#include<QRect>
#include<QPainter>
#include<QRect>
#include<QList>
#include"drawpages/drawsettingdateandtime.h"

class SettingDateandHour : public QMainWindow
{
    Q_OBJECT
public:
    explicit SettingDateandHour(QWidget *parent = 0);
    ~SettingDateandHour();

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
    DrawSettingDateAndTime *drawsettingdateandtime;

signals:

public slots:
};

#endif // SETTINGDATEANDHOUR_H
