#ifndef ARDUINO_H
#define ARDUINO_H

#include <QObject>
#include <QSerialPort>
#include <QSerialPortInfo>

class Arduino :public QObject{
    Q_OBJECT
public:
    explicit Arduino(QObject *parent = nullptr);

    bool connectToArduino(const QString &portName, qint32 baudRate = 9600);
    void sendCommand(const QString &command);

signals:
    void dataReceived(const QString &data);

private slots:
    void readData();

private:
    QSerialPort *serialPort;
};


#endif // ARDUINO_H
