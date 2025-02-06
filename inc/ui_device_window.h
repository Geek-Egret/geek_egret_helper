/********************************************************************************
** Form generated from reading UI file 'device_window.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEVICE_WINDOW_H
#define UI_DEVICE_WINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_deviceWindow
{
public:
    QPushButton *previous;
    QPushButton *next;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QPushButton *device_2;
    QPushButton *device_1;
    QPushButton *device_3;
    QPushButton *device_4;
    QPushButton *device_5;
    QPushButton *device_6;
    QPushButton *device_7;
    QPushButton *device_8;

    void setupUi(QWidget *deviceWindow)
    {
        if (deviceWindow->objectName().isEmpty())
            deviceWindow->setObjectName("deviceWindow");
        deviceWindow->resize(880, 435);
        deviceWindow->setMinimumSize(QSize(880, 435));
        deviceWindow->setMaximumSize(QSize(880, 435));
        previous = new QPushButton(deviceWindow);
        previous->setObjectName("previous");
        previous->setGeometry(QRect(10, 190, 40, 55));
        previous->setStyleSheet(QString::fromUtf8("background:transparent"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/mainWindow/button/previous.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        previous->setIcon(icon);
        previous->setIconSize(QSize(40, 40));
        previous->setFlat(true);
        next = new QPushButton(deviceWindow);
        next->setObjectName("next");
        next->setGeometry(QRect(830, 190, 40, 55));
        next->setStyleSheet(QString::fromUtf8("background:transparent"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/mainWindow/button/next.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        next->setIcon(icon1);
        next->setIconSize(QSize(40, 40));
        next->setFlat(true);
        scrollArea = new QScrollArea(deviceWindow);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(60, 40, 760, 350));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(-2417, 0, 3175, 331));
        scrollAreaWidgetContents->setMinimumSize(QSize(3175, 0));
        device_2 = new QPushButton(scrollAreaWidgetContents);
        device_2->setObjectName("device_2");
        device_2->setGeometry(QRect(610, 35, 280, 280));
        device_1 = new QPushButton(scrollAreaWidgetContents);
        device_1->setObjectName("device_1");
        device_1->setGeometry(QRect(240, 35, 280, 280));
        device_3 = new QPushButton(scrollAreaWidgetContents);
        device_3->setObjectName("device_3");
        device_3->setGeometry(QRect(980, 35, 280, 280));
        device_4 = new QPushButton(scrollAreaWidgetContents);
        device_4->setObjectName("device_4");
        device_4->setGeometry(QRect(1350, 35, 280, 280));
        device_5 = new QPushButton(scrollAreaWidgetContents);
        device_5->setObjectName("device_5");
        device_5->setGeometry(QRect(1720, 35, 280, 280));
        device_6 = new QPushButton(scrollAreaWidgetContents);
        device_6->setObjectName("device_6");
        device_6->setGeometry(QRect(2090, 35, 280, 280));
        device_7 = new QPushButton(scrollAreaWidgetContents);
        device_7->setObjectName("device_7");
        device_7->setGeometry(QRect(2460, 35, 280, 280));
        device_8 = new QPushButton(scrollAreaWidgetContents);
        device_8->setObjectName("device_8");
        device_8->setGeometry(QRect(2830, 35, 280, 280));
        scrollArea->setWidget(scrollAreaWidgetContents);

        retranslateUi(deviceWindow);

        QMetaObject::connectSlotsByName(deviceWindow);
    } // setupUi

    void retranslateUi(QWidget *deviceWindow)
    {
        deviceWindow->setWindowTitle(QCoreApplication::translate("deviceWindow", "Form", nullptr));
        previous->setText(QString());
        next->setText(QString());
        device_2->setText(QString());
        device_1->setText(QString());
        device_3->setText(QString());
        device_4->setText(QString());
        device_5->setText(QString());
        device_6->setText(QString());
        device_7->setText(QString());
        device_8->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class deviceWindow: public Ui_deviceWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEVICE_WINDOW_H
