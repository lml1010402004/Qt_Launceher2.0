#ifndef DRAWSETTINGSUSBTRANSFER_H
#define DRAWSETTINGSUSBTRANSFER_H
#include<QRect>
#include<QPainter>

class DrawSettingsUsbTransfer
{
public:
    DrawSettingsUsbTransfer();
    ~DrawSettingsUsbTransfer();

    void drawHomeIcon(QPainter *painter,QRect rect);
    void drawBackIcon(QPainter *painter,QRect rect);

    void drawUSBTransferButton(QPainter *painter,QRect rect);
    void drawUSBTransferTtile(QPainter *painter,QRect rect);

    void drawStateofUSBConnectedPC(QPainter *painter,int state,QRect rect);
    void drawButtonofUSBConnected(QPainter *painter,QRect rect);

    void init();

private:
    QRect rect;

};

#endif // DRAWSETTINGSUSBTRANSFER_H
