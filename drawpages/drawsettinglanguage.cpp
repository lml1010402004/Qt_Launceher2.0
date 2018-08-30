#include "drawsettinglanguage.h"

DrawSettingLanguage::DrawSettingLanguage()
{

}

DrawSettingLanguage::~DrawSettingLanguage()
{

}

void DrawSettingLanguage::drawHomeIcon(QPainter *painter, QString path, QRect rect)
{
    painter->drawPixmap(rect,path);
}

void DrawSettingLanguage::drawBackIcon(QPainter *painter, QString path, QRect rect)
{
    painter->drawPixmap(rect,path);
}

void DrawSettingLanguage::drawLanguageTitle(QPainter *painter, QString title, QRect rect)
{
    painter->drawText(rect,title);
}

void DrawSettingLanguage::drawLanguageItem(QPainter *painter, QString str, QRect rect)
{

}

void DrawSettingLanguage::drawKeyboardItem(QPainter *painter, QRect rect)
{

}

void DrawSettingLanguage::init()
{

}
