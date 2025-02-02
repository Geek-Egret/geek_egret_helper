/********************************************************************************
** Form generated from reading UI file 'help_window.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELP_WINDOW_H
#define UI_HELP_WINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HELP_WINDOW
{
public:
    QWidget *centralwidget;

    void setupUi(QMainWindow *HELP_WINDOW)
    {
        if (HELP_WINDOW->objectName().isEmpty())
            HELP_WINDOW->setObjectName("HELP_WINDOW");
        HELP_WINDOW->resize(197, 150);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/logo/geek_egret/LOGO.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        HELP_WINDOW->setWindowIcon(icon);
        HELP_WINDOW->setIconSize(QSize(35, 35));
        centralwidget = new QWidget(HELP_WINDOW);
        centralwidget->setObjectName("centralwidget");
        HELP_WINDOW->setCentralWidget(centralwidget);

        retranslateUi(HELP_WINDOW);

        QMetaObject::connectSlotsByName(HELP_WINDOW);
    } // setupUi

    void retranslateUi(QMainWindow *HELP_WINDOW)
    {
        HELP_WINDOW->setWindowTitle(QCoreApplication::translate("HELP_WINDOW", "GE\345\212\251\346\211\213-\345\270\256\345\212\251", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HELP_WINDOW: public Ui_HELP_WINDOW {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELP_WINDOW_H
