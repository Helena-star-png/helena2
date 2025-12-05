#include "arduino.h"
#include <QDebug>

Arduino::Arduino(QObject *parent) : QObject(parent)
{
    serialPort = new QSerialPort(this);
}

bool Arduino::connectToArduino(const QString &portName, qint32 baudRate){
    serialPort->setPortName(portName);
    serialPort->setBaudRate(baudRate);

    return serialPort->open(QIODevice::ReadWrite);
}

void Arduino::sendCommand(const QString &command){
    if(serialPort->isOpen()){
        serialPort->write(command.toUtf8() + '\n');
    }
}

void Arduino::readData(){
    QByteArray data = serialPort->readAll();
    bool ok;
    int value = data.toInt(&ok);

    if(ok){
        emit dataReceived(QString::number(value));
    }
}
