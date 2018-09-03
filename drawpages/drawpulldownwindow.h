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

   void drawCloseIcon(QPainter *painter,QRect rect,int icon_pressed);
   void drawShortcutArea(QPainter *painter,QRect rect);
   void drawGrayArea(QPainter *painter,int al,QRect rect);
   void drawShortcutIcons(QPainter *painter,int pressed_index,QList<QRect> *listrect);
   void drawLightshortcutandProgressBar(QPainter *painter,QString lightpath,int light_volume,QRect rect,QString floatpath);


   void drawLightPlus(QPainter *painter,QRect plusrect,int pressed);
   void drawLightMinus(QPainter *painter,QRect minusrect,int pressed);

};

#endif // DRAWPULLDOWNWINDOW_H
