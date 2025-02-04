/********************************************************************************
** Form generated from reading UI file 'config_window.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIG_WINDOW_H
#define UI_CONFIG_WINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_configWindow
{
public:
    QPushButton *Close;
    QPushButton *Minimize;
    QPushButton *back;
    QLabel *title;

    void setupUi(QWidget *configWindow)
    {
        if (configWindow->objectName().isEmpty())
            configWindow->setObjectName("configWindow");
        configWindow->resize(880, 540);
        configWindow->setMinimumSize(QSize(880, 540));
        configWindow->setMaximumSize(QSize(880, 540));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/mainWindow/logo/logo_1.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        configWindow->setWindowIcon(icon);
        Close = new QPushButton(configWindow);
        Close->setObjectName("Close");
        Close->setGeometry(QRect(855, 8, 15, 15));
        Close->setMinimumSize(QSize(15, 15));
        Close->setMaximumSize(QSize(15, 15));
        Close->setStyleSheet(QString::fromUtf8("background:transparent"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/mainWindow/button/close.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        Close->setIcon(icon1);
        Close->setIconSize(QSize(13, 13));
        Close->setFlat(true);
        Minimize = new QPushButton(configWindow);
        Minimize->setObjectName("Minimize");
        Minimize->setGeometry(QRect(830, 11, 15, 15));
        Minimize->setMinimumSize(QSize(15, 15));
        Minimize->setMaximumSize(QSize(15, 15));
        Minimize->setStyleSheet(QString::fromUtf8("background:transparent"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/mainWindow/button/minimize.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        Minimize->setIcon(icon2);
        Minimize->setIconSize(QSize(13, 13));
        Minimize->setFlat(true);
        back = new QPushButton(configWindow);
        back->setObjectName("back");
        back->setGeometry(QRect(15, 30, 35, 25));
        back->setMinimumSize(QSize(35, 25));
        back->setMaximumSize(QSize(35, 25));
        back->setStyleSheet(QString::fromUtf8(""));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/mainWindow/button/back.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        back->setIcon(icon3);
        back->setIconSize(QSize(25, 25));
        back->setFlat(true);
        title = new QLabel(configWindow);
        title->setObjectName("title");
        title->setGeometry(QRect(55, 20, 51, 35));
        title->setMinimumSize(QSize(0, 35));
        title->setMaximumSize(QSize(16777215, 35));
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font.setPointSize(14);
        font.setBold(true);
        title->setFont(font);
        title->setStyleSheet(QString::fromUtf8("color:#282c34;"));

        retranslateUi(configWindow);

        QMetaObject::connectSlotsByName(configWindow);
    } // setupUi

    void retranslateUi(QWidget *configWindow)
    {
        configWindow->setWindowTitle(QCoreApplication::translate("configWindow", "Geek-Egret \345\212\251\346\211\213-\350\256\276\347\275\256", nullptr));
        Close->setText(QString());
        Minimize->setText(QString());
        back->setText(QString());
        title->setText(QCoreApplication::translate("configWindow", "\350\256\276\347\275\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class configWindow: public Ui_configWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIG_WINDOW_H
