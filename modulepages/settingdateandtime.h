#ifndef SETTINGDATEANDTIME_H
#define SETTINGDATEANDTIME_H

#include <QMainWindow>
#include<QPaintEvent>
#include<QPainter>
#include<QPainter>


class SettingDateAndTime : public QMainWindow
{
    Q_OBJECT
public:
    explicit SettingDateAndTime(QWidget *parent = 0);
    ~SettingDateAndTime();

    void paintEvent(QPaintEvent *event);
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);


private:

    void init();
    void initView();
    int targetwidgetindex;
    QRect rect;
    QList<QRect> *rectlist;

signals:

public slots:
};

#endif // SETTINGDATEANDTIME_H
