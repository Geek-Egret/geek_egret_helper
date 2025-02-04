/********************************************************************************
** Form generated from reading UI file 'greet_window.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GREET_WINDOW_H
#define UI_GREET_WINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_greetWindow
{
public:
    QLabel *label;

    void setupUi(QWidget *greetWindow)
    {
        if (greetWindow->objectName().isEmpty())
            greetWindow->setObjectName("greetWindow");
        greetWindow->resize(400, 251);
        greetWindow->setMinimumSize(QSize(400, 251));
        greetWindow->setMaximumSize(QSize(400, 251));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/mainWindow/logo/logo_1.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        greetWindow->setWindowIcon(icon);
        label = new QLabel(greetWindow);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 400, 251));
        label->setPixmap(QPixmap(QString::fromUtf8(":/mainWindow/logo/logo_2.png")));

        retranslateUi(greetWindow);

        QMetaObject::connectSlotsByName(greetWindow);
    } // setupUi

    void retranslateUi(QWidget *greetWindow)
    {
        greetWindow->setWindowTitle(QCoreApplication::translate("greetWindow", "\345\220\257\345\212\250", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class greetWindow: public Ui_greetWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GREET_WINDOW_H
