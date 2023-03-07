#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    socket=new QUdpSocket(this);
    connect(socket,&QUdpSocket::readyRead,this,&Widget::readyReadSlot);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_sendBtn_clicked()
{
    QString sendToIp=ui->sendIpText->text();
    quint16 sendToPort=ui->sendPortText->text().toInt();
    QString sendMsg=ui->sendMsgText->toPlainText();
    socket->writeDatagram(sendMsg.toLocal8Bit(),QHostAddress(sendToIp),sendToPort);
}

void Widget::readyReadSlot()
{
    QHostAddress ip;
    quint16 port;
    QByteArray recvByte;
    qint64 size=socket->bytesAvailable();
    recvByte.resize(size);
    socket->readDatagram(recvByte.data(),size,&ip,&port);
    QString recvStr=QString::fromLocal8Bit(recvByte);
    ui->recvMsgText->setText(recvStr);
}


void Widget::on_bindBtn_clicked()
{
    QString ip=ui->bindIpText->text();
    quint16 port=ui->bindPortText->text().toInt();
    if(socket->bind(QHostAddress(ip),port))
    {
        QMessageBox::information(this,"提示","绑定成功");
    }
    else
    {
        QMessageBox::information(this,"提示",QString("绑定失败(%1)").arg(socket->errorString()));
    }
}



