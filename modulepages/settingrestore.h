#ifndef SETTINGRESTORE_H
#define SETTINGRESTORE_H

#include <QMainWindow>
#include<QMouseEvent>
#include<QPaintEvent>
#include<QPainter>
#include<QRect>
#include<QList>
#include"drawpages/drawsettingrestore.h"
#include"statusbar.h"
#include"statusbar_global.h"


class SettingRestore : public QMainWindow
{
    Q_OBJECT
public:
    explicit SettingRestore(QWidget *parent = 0);
    ~SettingRestore();

    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
    void paintEvent(QPaintEvent *event);

private:
    void init();
    void initView();
    QList<QRect> *rectlist;
    int targetwidgetindex;
    DrawSettingRestore *drawsettingrestore;
    StatusBar *statusbar;

signals:

public slots:
};

#endif // SETTINGRESTORE_H
