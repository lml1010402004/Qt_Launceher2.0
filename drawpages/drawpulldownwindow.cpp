#include "drawpulldownwindow.h"

DrawPulldownWindow::DrawPulldownWindow()
{

}

void DrawPulldownWindow::drawCloseIcon(QPainter *painter, QRect rect, QString iconpath)
{
    painter->drawPixmap(rect,iconpath);
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

void DrawPulldownWindow::drawShortcutIcons(QPainter *painter, QList<QString> pathlist, QList<QRect> *listrect)
{
    for(int i=0;i<listrect->size();i++){
        painter->drawPixmap(listrect->at(i),pathlist.at(i));
    }
}

void DrawPulldownWindow::drawLightshortcutandProgressBar(QPainter *painter, QString lightpath, int light_volume, QRect rect, QString floatpath)
{
 painter->drawPixmap(rect,lightpath);
}


