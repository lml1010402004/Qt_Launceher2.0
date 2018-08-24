#ifndef SETTINGLANGUAGE_H
#define SETTINGLANGUAGE_H

#include <QMainWindow>
#include<QRect>
#include<QMouseEvent>
#include<QPaintEvent>
#include<QPainter>
#include<QRect>
#include<QList>
#include"drawpages/drawsettinglanguage.h"

class SettingLanguage : public QMainWindow
{
    Q_OBJECT
public:
    explicit SettingLanguage(QWidget *parent = 0);
    ~SettingLanguage();

    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);

    void paintEvent(QPaintEvent *event);

private:
    void init();
    void initView();
    QList<QRect> *rectlist;
    int targetwidgetindex;
    DrawSettingLanguage *drawsettinglanguage;


signals:

public slots:
};

#endif // SETTINGLANGUAGE_H
