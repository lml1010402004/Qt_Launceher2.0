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

   void drawCloseIcon(QPainter *painter,QRect rect,QString iconpath);
   void drawShortcutArea(QPainter *painter,QRect rect);
   void drawGrayArea(QPainter *painter,int al,QRect rect);
   void drawShortcutIcons(QPainter *painter,QList<QString> pathlist,QList<QRect> *listrect);
   void drawLightshortcutandProgressBar(QPainter *painter,QString lightpath,int light_volume,QRect rect,QString floatpath);

};

#endif // DRAWPULLDOWNWINDOW_H
