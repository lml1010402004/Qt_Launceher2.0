#ifndef SETTINGNETWORK_H
#define SETTINGNETWORK_H

#include <QMainWindow>
#include <QList>
#include <QRect>

class SettingNetWork : public QMainWindow
{
    Q_OBJECT
public:
    explicit SettingNetWork(QWidget *parent = 0);
    ~SettingNetWork();
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);

    void paintEvent(QPaintEvent *event);

private:
    void init();
    void initView();
    QList<QRect> *rectlist;
    int targetwidgetindex;

signals:

public slots:
};

#endif // SETTINGNETWORK_H