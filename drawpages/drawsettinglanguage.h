#ifndef DRAWSETTINGLANGUAGE_H
#define DRAWSETTINGLANGUAGE_H
#include<QRect>
#include<QPainter>


class DrawSettingLanguage
{
public:
    DrawSettingLanguage();
    ~DrawSettingLanguage();

    void drawHomeIcon(QPainter *painter,QString path,QRect rect);
    void drawBackIcon(QPainter *painter,QString path,QRect rect);
    void drawLanguageTitle(QPainter *painter,QString title,QRect rect);

    void drawLanguageItem(QPainter *painter,QString str,QRect rect);
    void drawKeyboardItem(QPainter *painter,QRect rect);

    void init();

private:
    QRect rect;


};

#endif // DRAWSETTINGLANGUAGE_H
