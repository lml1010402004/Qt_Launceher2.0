#include "drawdateandhour.h"

DrawDateandHour::DrawDateandHour()
{

}

DrawDateandHour::~DrawDateandHour()
{

}

void DrawDateandHour::drawConfirmandCancleButton(QPainter *painter, QRect confirmrect, QRect canclerect)
{

}

void DrawDateandHour::drawLeftInputArea(QPainter *painter, QRect rect)
{

}

void DrawDateandHour::drawRightInputArea(QPainter *painter, QRect rect)
{

}

void DrawDateandHour::drawTitle(QPainter *painter, QString title, QRect rect)
{
    painter->drawText(rect,title);

}
