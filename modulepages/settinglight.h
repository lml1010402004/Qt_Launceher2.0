#ifndef SETTINGLIGHT_H
#define SETTINGLIGHT_H

#include <QMainWindow>
#include<QPaintEvent>
#include<QMouseEvent>
#include<QRect>
#include<QList>
#include"drawpages/drawsettinglight.h"

class SettingLight : public QMainWindow
{
    Q_OBJECT
public:
    explicit SettingLight(QWidget *parent = 0);
    ~SettingLight();

    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);

private:
    void init();
    void initView();

    QList<QRect> *rectlist;
    QRect rect;
    int targetwidgetindex;
    DrawSettingLight *drawsettinglight;

signals:

public slots:
};

#endif // SETTINGLIGHT_H
