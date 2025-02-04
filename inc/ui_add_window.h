/********************************************************************************
** Form generated from reading UI file 'add_window.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_WINDOW_H
#define UI_ADD_WINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addWindow
{
public:
    QPushButton *Close;
    QPushButton *Minimize;
    QLabel *title;
    QPushButton *back;

    void setupUi(QWidget *addWindow)
    {
        if (addWindow->objectName().isEmpty())
            addWindow->setObjectName("addWindow");
        addWindow->resize(880, 540);
        addWindow->setMinimumSize(QSize(880, 540));
        addWindow->setMaximumSize(QSize(880, 540));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/mainWindow/logo/logo_1.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        addWindow->setWindowIcon(icon);
        Close = new QPushButton(addWindow);
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
        Minimize = new QPushButton(addWindow);
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
        title = new QLabel(addWindow);
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
        back = new QPushButton(addWindow);
        back->setObjectName("back");
        back->setGeometry(QRect(15, 30, 35, 25));
        back->setMinimumSize(QSize(35, 25));
        back->setMaximumSize(QSize(35, 25));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/mainWindow/button/back.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        back->setIcon(icon3);
        back->setIconSize(QSize(25, 25));
        back->setFlat(true);

        retranslateUi(addWindow);

        QMetaObject::connectSlotsByName(addWindow);
    } // setupUi

    void retranslateUi(QWidget *addWindow)
    {
        addWindow->setWindowTitle(QCoreApplication::translate("addWindow", "Geek-Egret\345\212\251\346\211\213-\346\267\273\345\212\240\350\256\276\345\244\207", nullptr));
        Close->setText(QString());
        Minimize->setText(QString());
        title->setText(QCoreApplication::translate("addWindow", "\350\256\276\347\275\256", nullptr));
        back->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class addWindow: public Ui_addWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_WINDOW_H
