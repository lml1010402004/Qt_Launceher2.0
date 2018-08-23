#ifndef SETTINGSCREEN_H
#define SETTINGSCREEN_H

#include <QMainWindow>
#include<QPaintEvent>
#include<QPainter>
#include<QMouseEvent>
#include<QRect>
#include<QList>



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

signals:

public slots:
};

#endif // SETTINGSCREEN_H
