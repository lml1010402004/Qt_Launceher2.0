#-------------------------------------------------
#
# Project created by QtCreator 2018-08-17T13:39:37
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = SecondQtArmDeskV2
TEMPLATE = app


SOURCES += main.cpp\
    modulepages/mainwindow.cpp \
    database/database.cpp \
    modulepages/bookshelf.cpp \
    modulepages/confirmdialog.cpp \
    modulepages/connectwifidialog.cpp \
    modulepages/pulldownwindow.cpp \
    modulepages/searchresultofbook.cpp \
    modulepages/settingabouttablet.cpp \
    modulepages/settingdateandtime.cpp \
    modulepages/settinglanguage.cpp \
    modulepages/settingnetwork.cpp \
    modulepages/settings.cpp \
    modulepages/settingscreen.cpp \
    modulepages/settingusbtransfer.cpp \
    drawpages/drawbookshelf.cpp \
    drawpages/drawcommonview.cpp \
    drawpages/drawconfirmdialog.cpp \
    drawpages/drawconnectwifidialog.cpp \
    drawpages/drawdateandhour.cpp \
    drawpages/drawgamepageview.cpp \
    drawpages/drawmainpage.cpp \
    drawpages/drawpulldownwindow.cpp \
    drawpages/drawsearchresultofbooks.cpp \
    drawpages/drawsettingabouttablet.cpp \
    drawpages/drawsettingdateandtime.cpp \
    drawpages/drawsettinglanguage.cpp \
    drawpages/drawsettinglight.cpp \
    drawpages/drawsettingnetwork.cpp \
    drawpages/drawsettingrestore.cpp \
    drawpages/drawsettingscreen.cpp \
    drawpages/drawsettingmodules.cpp \
    drawpages/drawsettingsusbtransfer.cpp \
    drawpages/drawswitchlanguagedialog.cpp \
    dataItem/bookinfoitem.cpp \
    dataItem/buttonbottom.cpp \
    dataItem/conditionitem.cpp \
    dataItem/datemodel.cpp \
    dataItem/systemitems.cpp \
    dataItem/wallpaperitem.cpp \
    dataItem/wifiitem.cpp \
    utils/commonutils.cpp \
    utils/hidepulldown.cpp \
    utils/mysetting.cpp \
    utils/wifiservice.cpp \
    sleepDetect/eventthread.cpp \
    sleepDetect/screensleep.cpp \
    powerkeydetectthread.cpp \
    keyboardfilter.cpp \
    usbservice.cpp \
    modulepages/settingrestore.cpp \
    modulepages/settingdateandhour.cpp \
    modulepages/settinglight.cpp \
    modulepages/thirdapplications.cpp \
    drawpages/drawthirdapplication.cpp

HEADERS  += \
    application.h \
    modulepages/mainwindow.h \
    statusbar.h \
    statusbar_global.h \
    database/database.h \
    setdateandhour.h \
    modulepages/bookshelf.h \
    modulepages/confirmdialog.h \
    modulepages/connectwifidialog.h \
    modulepages/pulldownwindow.h \
    modulepages/searchresultofbook.h \
    modulepages/settingabouttablet.h \
    modulepages/settingdateandtime.h \
    modulepages/settinglanguage.h \
    modulepages/settingnetwork.h \
    modulepages/settings.h \
    modulepages/settingscreen.h \
    modulepages/settingusbtransfer.h \
    drawpages/drawbookshelf.h \
    drawpages/drawcommonview.h \
    drawpages/drawconfirmdialog.h \
    drawpages/drawconnectwifidialog.h \
    drawpages/drawdateandhour.h \
    drawpages/drawgamepageview.h \
    drawpages/drawmainpage.h \
    drawpages/drawpulldownwindow.h \
    drawpages/drawsearchresultofbooks.h \
    drawpages/drawsettingabouttablet.h \
    drawpages/drawsettingdateandtime.h \
    drawpages/drawsettinglanguage.h \
    drawpages/drawsettinglight.h \
    drawpages/drawsettingnetwork.h \
    drawpages/drawsettingrestore.h \
    drawpages/drawsettingscreen.h \
    drawpages/drawsettingmodules.h \
    drawpages/drawsettingsusbtransfer.h \
    drawpages/drawswitchlanguagedialog.h \
    dataItem/bookinfoitem.h \
    dataItem/buttonbottom.h \
    dataItem/conditionitem.h \
    dataItem/datemodel.h \
    dataItem/systemitems.h \
    dataItem/wallpaperitem.h \
    dataItem/wifiitem.h \
    utils/commonutils.h \
    utils/hidepulldown.h \
    utils/mysetting.h \
    utils/wifiservice.h \
    sleepDetect/eventthread.h \
    sleepDetect/screensleep.h \
    keyboard.h \
    keyboardfilter.h \
    pinyinim.h \
    syssettings.h \
    usbservice.h \
    powerkeydetectthread.h \
    modulepages/settingrestore.h \
    modulepages/settingdateandhour.h \
    modulepages/settinglight.h \
    modulepages/thirdapplications.h \
    drawpages/drawthirdapplication.h

FORMS    +=



win32:CONFIG(release, debug|release): LIBS += -L$$PWD/libs/release/ -lStatusBar
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/libs/debug/ -lStatusBar
else:unix: LIBS += -L$$PWD/libs/ -lStatusBar




INCLUDEPATH += $$PWD/libs
DEPENDPATH += $$PWD/libs

DISTFILES +=

RESOURCES += \
    pics.qrc

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/libs/release/ -lSysSettings
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/libs/debug/ -lSysSettings
else:unix: LIBS += -L$$PWD/libs/ -lSysSettings

INCLUDEPATH += $$PWD/libs
DEPENDPATH += $$PWD/libs

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/libs/release/ -lPinyinIM
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/libs/debug/ -lPinyinIM
else:unix: LIBS += -L$$PWD/libs/ -lPinyinIM

INCLUDEPATH += $$PWD/libs
DEPENDPATH += $$PWD/libs
