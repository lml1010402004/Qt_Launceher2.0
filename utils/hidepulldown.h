#ifndef HIDEPULLDOWN_H
#define HIDEPULLDOWN_H

#include <QObject>
#include<QThread>



class HidePullDown : public QThread
{
    Q_OBJECT
public:
    HidePullDown(QObject *obj);
    void run();

signals:
public slots:

};

#endif // HIDEPULLDOWN_H
