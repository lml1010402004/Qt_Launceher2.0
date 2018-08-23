#include "modulepages/mainwindow.h"
#include <QApplication>
#include"syssettings.h"
#include<QTextCodec>
#include<QList>
#include<QMainWindow>
#include<QTextCodec>
#include<QFont>
#include"pinyinim.h"
#include"keyboard.h"
#include"keyboardfilter.h"

QTranslator qtTranslator;

KeyBoardFilter *keyboardfilter;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QApplication::setScreenUpdateMode(QApplication::EINK_GC16_LOCAL_MODE);

    //设置支持汉字字体显示==开始===
    QFont font;
    font.setFamily(("Microsoft YaHei"));
    a.setFont(font);
    QTextCodec::setCodecForTr(QTextCodec::codecForName("UTF-8"));
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF-8"));
    QTextCodec::setCodecForCStrings(QTextCodec::codecForName("UTF-8"));
    //设置支持汉字显示==结束==

    //获取系统默认语言
    SysSettings sys;
//    QString tempStr = sys.getLanguage();
//    if(tempStr.contains(QString("Chinese"))){
//        qtTranslator.load(":/mypic/cn.qm");
//    }else if(tempStr.contains(QString("English"))){
//        qtTranslator.load(":/mypic/en.qm");
//    }

//    QApplication::installTranslator(&qtTranslator);

    PinyinIM   *pinyinIM = new PinyinIM();
    //pinyinIM->connect(pinyinIM, SIGNAL(sigConfirmString(QString)), this, SLOT(pinyinIMConfirmStringS(QString)));
    QWSServer::setCurrentInputMethod(pinyinIM);


//    keyboardfilter = new KeyBoardFilter;

//    QWSServer::addKeyboardFilter(keyboardfilter);


    MainWindow w;
    w.show();
    return a.exec();
}
