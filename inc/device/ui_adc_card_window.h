/********************************************************************************
** Form generated from reading UI file 'adc_card_window.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADC_CARD_WINDOW_H
#define UI_ADC_CARD_WINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_adccardWindow
{
public:
    QPushButton *back;
    QLabel *title;

    void setupUi(QWidget *adccardWindow)
    {
        if (adccardWindow->objectName().isEmpty())
            adccardWindow->setObjectName("adccardWindow");
        adccardWindow->resize(880, 510);
        adccardWindow->setMinimumSize(QSize(880, 510));
        adccardWindow->setMaximumSize(QSize(880, 540));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/mainWindow/logo/logo_1.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        adccardWindow->setWindowIcon(icon);
        back = new QPushButton(adccardWindow);
        back->setObjectName("back");
        back->setGeometry(QRect(15, 10, 35, 25));
        back->setMinimumSize(QSize(35, 25));
        back->setMaximumSize(QSize(35, 25));
        back->setStyleSheet(QString::fromUtf8(""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/mainWindow/button/back.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        back->setIcon(icon1);
        back->setIconSize(QSize(25, 25));
        back->setFlat(true);
        title = new QLabel(adccardWindow);
        title->setObjectName("title");
        title->setGeometry(QRect(55, 0, 181, 35));
        title->setMinimumSize(QSize(0, 35));
        title->setMaximumSize(QSize(16777215, 35));
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font.setPointSize(14);
        font.setBold(true);
        title->setFont(font);
        title->setStyleSheet(QString::fromUtf8("color:#282c34;"));

        retranslateUi(adccardWindow);

        QMetaObject::connectSlotsByName(adccardWindow);
    } // setupUi

    void retranslateUi(QWidget *adccardWindow)
    {
        adccardWindow->setWindowTitle(QCoreApplication::translate("adccardWindow", "Geek-Egret \345\212\251\346\211\213-\350\256\276\347\275\256", nullptr));
        back->setText(QString());
        title->setText(QCoreApplication::translate("adccardWindow", "ADC \351\207\207\346\240\267\345\215\241\344\270\212\344\275\215\346\234\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class adccardWindow: public Ui_adccardWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADC_CARD_WINDOW_H
