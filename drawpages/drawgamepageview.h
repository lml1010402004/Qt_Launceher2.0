#ifndef DRAWGAMEPAGEVIEW_H
#define DRAWGAMEPAGEVIEW_H
#include<QPainter>
#include<QRect>

class DrawGamePageView
{
public:
    DrawGamePageView();
    ~DrawGamePageView();

    void drawHomeButton(QPainter *painter,QRect rect);
    void drawGames(QPainter *painter,QRect rect);
private:
    QRect rect;

};

#endif // DRAWGAMEPAGEVIEW_H
