#ifndef DRAWPULLDOWNWINDOW_H
#define DRAWPULLDOWNWINDOW_H
#include<QList>
#include<QRect>
#include<QPainter>
#include<QString>

class DrawPulldownWindow
{
public:
    DrawPulldownWindow();
    ~DrawPulldownWindow();

   void drawCloseIcon(QPainter *painter,QRect rect);
   void drawShortcutArea(QPainter *painter);
   void drawGrayArea(QPainter *painter,int al,QRect rect);
   void drawShortcutIcons(QPainter *painter,QList<QString> pathlist,QList<QRect> *listrect);
   void drawLightshortcutandProgressBar(QPainter *painter,QString path,int light_volume,QRect rect);

};

#endif // DRAWPULLDOWNWINDOW_H
