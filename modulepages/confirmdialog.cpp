#include "confirmdialog.h"
#include"utils/commonutils.h"

int comfirm_rectflag[4]={0,0,0,0};

ConfirmDialog::ConfirmDialog(QWidget *parent):QDialog(parent)
{
    this->setWindowFlags(Qt::Dialog|Qt::FramelessWindowHint);
    init();

}

ConfirmDialog::~ConfirmDialog()
{

}

void ConfirmDialog::paintEvent(QPaintEvent *event)
{

}

void ConfirmDialog::mousePressEvent(QMouseEvent *event)
{
    targetwidgetindex = commonUtils::getTheTargetWidget(event->x(),event->y(),rectlist);
    this->repaint();
}

void ConfirmDialog::mouseMoveEvent(QMouseEvent *event)
{

}

void ConfirmDialog::mouseReleaseEvent(QMouseEvent *event)
{
    comfirm_rectflag[targetwidgetindex] = 0;
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
        this->repaint(rectlist->at(targetwidgetindex));
        targetwidgetindex = -1;

    }
}

void ConfirmDialog::init()
{
    drawconfirmdialog = new DrawConfirmDialog(this);
    rectlist = new QList<QRect>;
    initView();
}

void ConfirmDialog::initView()
{


}
