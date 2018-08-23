#ifndef SETTINGS_H
#define SETTINGS_H

#include <QMainWindow>
#include<QRect>
#include<QMouseEvent>
#include<QPaintEvent>
#include<QPainter>
#include"statusbar.h"
#include"statusbar_global.h"
#include<QList>

class Settings : public QMainWindow
{
    Q_OBJECT
public:
    explicit Settings(QWidget *parent = 0);
    ~Settings();

    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);

    void paintEvent(QPaintEvent *event);

private:
    void initView();
    void init();
    void initConnections();
    QList<QRect> *rectlist;
    int targetwidgetindex;

signals:

public slots:
};

#endif // SETTINGS_H
