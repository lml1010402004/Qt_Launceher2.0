#include "drawsettingrestore.h"

DrawSettingRestore::DrawSettingRestore()
{

}

DrawSettingRestore::~DrawSettingRestore()
{

}

void DrawSettingRestore::drawHomeIcon(QPainter *painter, QRect rect, QString iconpath)
{
    painter->drawPixmap(rect,iconpath);
}

void DrawSettingRestore::drawBackIcon(QPainter *painter, QRect rect, QString iconpath)
{
    painter->drawPixmap(rect,iconpath);
}

void DrawSettingRestore::drawRestoreTitle(QPainter *painter, QRect rect, QString title)
{
    painter->drawText(rect,title);
}


void DrawSettingRestore::drawRestoreButtonandShutdownButton(QPainter *painter, QRect resotrerect, QRect shutdownrect)
{

}

