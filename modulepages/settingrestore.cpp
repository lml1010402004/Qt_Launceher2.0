#include "settingrestore.h"
#include"utils/commonutils.h"

int settrestore_rectflag[5] = {0,0,0,0,0};

SettingRestore::SettingRestore(QWidget *parent) : QMainWindow(parent)
{
    init();
}

SettingRestore::~SettingRestore()
{

}

void SettingRestore::mousePressEvent(QMouseEvent *event)
{
    targetwidgetindex = commonUtils::getTheTargetWidget(event->x(),event->y(),rectlist);
    this->repaint();
}

void SettingRestore::mouseMoveEvent(QMouseEvent *event)
{

}

void SettingRestore::mouseReleaseEvent(QMouseEvent *event)
{

    settrestore_rectflag[targetwidgetindex] = 0;
    if(targetwidgetindex>-1){
        switch (targetwidgetindex) {
        case 0:

            break;
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        default:
            break;
        }
        targetwidgetindex = -1;
        this->repaint();
    }
}

void SettingRestore::paintEvent(QPaintEvent *event)
{
    QPainter *painter = new QPainter;

}

void SettingRestore::init()
{
    initView();

}

void SettingRestore::initView()
{
    rectlist = new QList<QRect>;
    drawsettingrestore = new DrawSettingRestore;


}
