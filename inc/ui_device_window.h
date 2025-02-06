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
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 758, 348));
        scrollAreaWidgetContents->setMinimumSize(QSize(0, 0));
        scrollArea->setWidget(scrollAreaWidgetContents);

        retranslateUi(deviceWindow);

        QMetaObject::connectSlotsByName(deviceWindow);
    } // setupUi

    void retranslateUi(QWidget *deviceWindow)
    {
        deviceWindow->setWindowTitle(QCoreApplication::translate("deviceWindow", "Form", nullptr));
        previous->setText(QString());
        next->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class deviceWindow: public Ui_deviceWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEVICE_WINDOW_H
