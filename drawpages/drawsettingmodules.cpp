#include "drawsettingmodules.h"

extern  QString home_pressed;
extern  QString home_unpress;
DrawSettingModules::DrawSettingModules()
{

    init();
}

DrawSettingModules::~DrawSettingModules()
{

}

void DrawSettingModules::drawHomeIcon(QPainter *painter, QRect rect, int iconpath)
{
   if(iconpath==1){
    painter->drawPixmap(rect,home_pressed);
   }else{
    painter->drawPixmap(rect,home_unpress);
   }
}


void DrawSettingModules::drawSystemSettingText(QPainter *painter, QString text, QRect rect)
{
   painter->drawText(rect,text);
}

void DrawSettingModules::drawSettingItems(QPainter *painter, QList<SystemItems*> *itemlist)
{
    font.setPixelSize(20);
    painter->setFont(font);
  for(int i=0;i<itemlist->size();i++){
    painter->drawRect(itemlist->at(i)->itemrect);
    painter->drawText(itemlist->at(i)->itemtextrect,itemlist->at(i)->getItem_text_text());
    painter->drawPixmap(itemlist->at(i)->itemiconrect,itemlist->at(i)->getItem_icon_path());
  }

}



void DrawSettingModules::init()
{

}

