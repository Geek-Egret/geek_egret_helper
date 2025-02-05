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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_deviceWindow
{
public:
    QPushButton *device_1;
    QPushButton *device_2;
    QPushButton *previous;
    QPushButton *next;
    QPushButton *device_3;

    void setupUi(QWidget *deviceWindow)
    {
        if (deviceWindow->objectName().isEmpty())
            deviceWindow->setObjectName("deviceWindow");
        deviceWindow->resize(880, 435);
        deviceWindow->setMinimumSize(QSize(880, 435));
        deviceWindow->setMaximumSize(QSize(880, 435));
        device_1 = new QPushButton(deviceWindow);
        device_1->setObjectName("device_1");
        device_1->setGeometry(QRect(115, 75, 280, 280));
        device_1->setStyleSheet(QString::fromUtf8("background:transparent"));
        device_1->setIconSize(QSize(130, 130));
        device_2 = new QPushButton(deviceWindow);
        device_2->setObjectName("device_2");
        device_2->setGeometry(QRect(485, 75, 280, 280));
        device_2->setStyleSheet(QString::fromUtf8("background:transparent"));
        device_2->setIconSize(QSize(130, 130));
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
        device_3 = new QPushButton(deviceWindow);
        device_3->setObjectName("device_3");
        device_3->setGeometry(QRect(300, 75, 280, 280));
        device_3->setStyleSheet(QString::fromUtf8("background:transparent"));
        device_3->setIconSize(QSize(130, 130));

        retranslateUi(deviceWindow);

        QMetaObject::connectSlotsByName(deviceWindow);
    } // setupUi

    void retranslateUi(QWidget *deviceWindow)
    {
        deviceWindow->setWindowTitle(QCoreApplication::translate("deviceWindow", "Form", nullptr));
        device_1->setText(QString());
        device_2->setText(QString());
        previous->setText(QString());
        next->setText(QString());
        device_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class deviceWindow: public Ui_deviceWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEVICE_WINDOW_H
