/********************************************************************************
** Form generated from reading UI file 'ge_window.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GE_WINDOW_H
#define UI_GE_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GE_WINDOW
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *GE_WINDOW)
    {
        if (GE_WINDOW->objectName().isEmpty())
            GE_WINDOW->setObjectName("GE_WINDOW");
        GE_WINDOW->resize(800, 600);
        centralwidget = new QWidget(GE_WINDOW);
        centralwidget->setObjectName("centralwidget");
        GE_WINDOW->setCentralWidget(centralwidget);
        menubar = new QMenuBar(GE_WINDOW);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        GE_WINDOW->setMenuBar(menubar);
        statusbar = new QStatusBar(GE_WINDOW);
        statusbar->setObjectName("statusbar");
        GE_WINDOW->setStatusBar(statusbar);

        retranslateUi(GE_WINDOW);

        QMetaObject::connectSlotsByName(GE_WINDOW);
    } // setupUi

    void retranslateUi(QMainWindow *GE_WINDOW)
    {
        GE_WINDOW->setWindowTitle(QCoreApplication::translate("GE_WINDOW", "GE_WINDOW", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GE_WINDOW: public Ui_GE_WINDOW {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GE_WINDOW_H
