/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGroupBox *groupBox;
    QTextEdit *recvMsgText;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *sendIpText;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *sendPortText;
    QVBoxLayout *verticalLayout;
    QTextEdit *sendMsgText;
    QPushButton *sendBtn;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QLineEdit *bindIpText;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QLineEdit *bindPortText;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *bindBtn;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(800, 579);
        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(10, 288, 778, 281));
        recvMsgText = new QTextEdit(groupBox);
        recvMsgText->setObjectName("recvMsgText");
        recvMsgText->setGeometry(QRect(80, 30, 601, 221));
        recvMsgText->setReadOnly(true);
        widget = new QWidget(Widget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(324, 10, 451, 267));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(widget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        sendIpText = new QLineEdit(widget);
        sendIpText->setObjectName("sendIpText");

        horizontalLayout->addWidget(sendIpText);


        horizontalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        sendPortText = new QLineEdit(widget);
        sendPortText->setObjectName("sendPortText");

        horizontalLayout_2->addWidget(sendPortText);


        horizontalLayout_3->addLayout(horizontalLayout_2);


        verticalLayout_2->addLayout(horizontalLayout_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        sendMsgText = new QTextEdit(widget);
        sendMsgText->setObjectName("sendMsgText");

        verticalLayout->addWidget(sendMsgText);

        sendBtn = new QPushButton(widget);
        sendBtn->setObjectName("sendBtn");

        verticalLayout->addWidget(sendBtn);


        verticalLayout_2->addLayout(verticalLayout);

        widget1 = new QWidget(Widget);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(30, 30, 267, 231));
        verticalLayout_3 = new QVBoxLayout(widget1);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_3 = new QLabel(widget1);
        label_3->setObjectName("label_3");

        horizontalLayout_4->addWidget(label_3);

        bindIpText = new QLineEdit(widget1);
        bindIpText->setObjectName("bindIpText");

        horizontalLayout_4->addWidget(bindIpText);


        verticalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_4 = new QLabel(widget1);
        label_4->setObjectName("label_4");

        horizontalLayout_5->addWidget(label_4);

        bindPortText = new QLineEdit(widget1);
        bindPortText->setObjectName("bindPortText");

        horizontalLayout_5->addWidget(bindPortText);


        verticalLayout_3->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        bindBtn = new QPushButton(widget1);
        bindBtn->setObjectName("bindBtn");

        horizontalLayout_6->addWidget(bindBtn);


        verticalLayout_3->addLayout(horizontalLayout_6);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Widget", "\345\257\271\346\226\271\346\266\210\346\201\257", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\345\257\271\346\226\271ip\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "\345\257\271\346\226\271\347\253\257\345\217\243\357\274\232", nullptr));
        sendBtn->setText(QCoreApplication::translate("Widget", "\345\217\221\351\200\201", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "\347\273\221\345\256\232ip\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("Widget", "\347\273\221\345\256\232\347\253\257\345\217\243\345\217\267\357\274\232", nullptr));
        bindBtn->setText(QCoreApplication::translate("Widget", "\347\273\221\345\256\232socket", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
