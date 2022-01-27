#ifndef WEBCLIENT_H
#define WEBCLIENT_H

#include "ui_webclient.h"

#include <QTcpSocket>
#include <QAbstractSocket>

class Webclient : public QWidget, private Ui::Webclient
{
    Q_OBJECT

public:
    explicit Webclient(QWidget *parent = nullptr);

private slots:
    void on_goButton_clicked();

private:
    QTcpSocket *m_socket;
    QString m_hostname;
    unsigned short m_port = 80;

    void connected();
    void readyRead();
};

#endif // WEBCLIENT_H
