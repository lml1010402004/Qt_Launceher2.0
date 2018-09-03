#include "drawpulldownwindow.h"

DrawPulldownWindow::DrawPulldownWindow()
{

}

void DrawPulldownWindow::drawCloseIcon(QPainter *painter, QRect rect, int iconpressed)
{
//    painter->drawPixmap(rect,iconpath);
}

void DrawPulldownWindow::drawShortcutArea(QPainter *painter, QRect rect)
{
    painter->drawRect(rect);

}



void DrawPulldownWindow::drawGrayArea(QPainter *painter, int al, QRect rect)
{
    QBrush brush(QColor(100,100,100,al));
    painter->setBrush(brush);
    painter->drawRoundedRect(rect,0,0);

}

void DrawPulldownWindow::drawShortcutIcons(QPainter *painter,int pressed_index, QList<QRect> *listrect)
{
    for(int i=0;i<listrect->size();i++){
        if(pressed_index==1){
            //       painter->drawPixmap(listrect->at(i),);
        }else{
            //        painter->drawPixmap(listrect->at(i),);
        }

    }

}

void DrawPulldownWindow::drawLightshortcutandProgressBar(QPainter *painter, QString lightpath, int light_volume, QRect rect, QString floatpath)
{
    painter->drawPixmap(rect,lightpath);
}

void DrawPulldownWindow::drawLightPlus(QPainter *painter, QRect plusrect, int pressed)
{
    if(pressed){

    }else{

    }
}

void DrawPulldownWindow::drawLightMinus(QPainter *painter, QRect minusrect, int pressed)
{
    if(pressed){

    }else{

    }

}


