#include "confirmdialog.h"
#include"utils/commonutils.h"

int comfirm_rectflag[4]={0,0,0,0};

ConfirmDialog::ConfirmDialog()
{


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
  targetwidgetindex = -1;
  this->repaint();
}

void ConfirmDialog::init()
{
    drawconfirmdialog = new DrawConfirmDialog;
    rectlist = new QList<QRect>;
    initView();

}

void ConfirmDialog::initView()
{

}
