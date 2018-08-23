#ifndef DRAWDATEANDHOUR_H
#define DRAWDATEANDHOUR_H
#include<QRect>
#include<QPainter>

class DrawDateandHour
{
public:
    DrawDateandHour();
    ~DrawDateandHour();


    void drawConfirmandCancleButton(QPainter *painter, QRect confirmrect,QRect canclerect);
    void drawLeftInputArea(QPainter *painter ,QRect rect);
    void drawRightInputArea(QPainter *painter,QRect rect);
    void drawTitle(QPainter *painter,QString title,QRect rect);

private:
    QRect rect;
};

#endif // DRAWDATEANDHOUR_H
