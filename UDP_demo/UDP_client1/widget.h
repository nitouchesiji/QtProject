#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QUdpSocket>
#include <QMessageBox>
#include <QDebug>
QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_sendBtn_clicked();

    void readyReadSlot();

    void on_bindBtn_clicked();


private:
    Ui::Widget *ui;
    QUdpSocket *socket;
};
#endif // WIDGET_H
