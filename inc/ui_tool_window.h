/********************************************************************************
** Form generated from reading UI file 'tool_window.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOOL_WINDOW_H
#define UI_TOOL_WINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_toolWindow
{
public:
    QLabel *title;
    QPushButton *back;

    void setupUi(QWidget *toolWindow)
    {
        if (toolWindow->objectName().isEmpty())
            toolWindow->setObjectName("toolWindow");
        toolWindow->resize(114, 514);
        toolWindow->setMinimumSize(QSize(0, 514));
        toolWindow->setMaximumSize(QSize(880, 514));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/mainWindow/logo/logo_1.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        toolWindow->setWindowIcon(icon);
        title = new QLabel(toolWindow);
        title->setObjectName("title");
        title->setGeometry(QRect(55, 0, 41, 35));
        title->setMinimumSize(QSize(0, 35));
        title->setMaximumSize(QSize(16777215, 35));
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font.setPointSize(14);
        font.setBold(true);
        title->setFont(font);
        title->setStyleSheet(QString::fromUtf8("color:#282c34;"));
        back = new QPushButton(toolWindow);
        back->setObjectName("back");
        back->setGeometry(QRect(15, 10, 35, 25));
        back->setMinimumSize(QSize(35, 25));
        back->setMaximumSize(QSize(35, 25));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/ui/ui_img/back.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        back->setIcon(icon1);
        back->setIconSize(QSize(25, 25));
        back->setFlat(true);

        retranslateUi(toolWindow);

        QMetaObject::connectSlotsByName(toolWindow);
    } // setupUi

    void retranslateUi(QWidget *toolWindow)
    {
        toolWindow->setWindowTitle(QCoreApplication::translate("toolWindow", "Geek-Egret\345\212\251\346\211\213-\346\267\273\345\212\240\350\256\276\345\244\207", nullptr));
        title->setText(QCoreApplication::translate("toolWindow", "\345\267\245\345\205\267", nullptr));
        back->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class toolWindow: public Ui_toolWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOOL_WINDOW_H
