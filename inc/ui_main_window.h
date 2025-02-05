/********************************************************************************
** Form generated from reading UI file 'main_window.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_WINDOW_H
#define UI_MAIN_WINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *Minimize;
    QPushButton *Close;
    QPushButton *url;
    QLabel *greet;
    QFrame *line;
    QPushButton *config;
    QFrame *line_2;
    QPushButton *add;
    QLabel *greet_emoji;

    void setupUi(QMainWindow *mainWindow)
    {
        if (mainWindow->objectName().isEmpty())
            mainWindow->setObjectName("mainWindow");
        mainWindow->resize(880, 540);
        mainWindow->setMinimumSize(QSize(880, 540));
        mainWindow->setMaximumSize(QSize(880, 540));
        QFont font;
        font.setPointSize(12);
        mainWindow->setFont(font);
        mainWindow->setMouseTracking(false);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/mainWindow/logo/logo_1.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        mainWindow->setWindowIcon(icon);
        mainWindow->setWindowOpacity(1.000000000000000);
        mainWindow->setAutoFillBackground(false);
        mainWindow->setStyleSheet(QString::fromUtf8("color:#282c34"));
        mainWindow->setIconSize(QSize(64, 64));
        centralwidget = new QWidget(mainWindow);
        centralwidget->setObjectName("centralwidget");
        Minimize = new QPushButton(centralwidget);
        Minimize->setObjectName("Minimize");
        Minimize->setGeometry(QRect(830, 11, 15, 15));
        Minimize->setMinimumSize(QSize(15, 15));
        Minimize->setMaximumSize(QSize(15, 15));
        Minimize->setStyleSheet(QString::fromUtf8("background:transparent"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/mainWindow/button/minimize.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        Minimize->setIcon(icon1);
        Minimize->setIconSize(QSize(13, 13));
        Minimize->setFlat(true);
        Close = new QPushButton(centralwidget);
        Close->setObjectName("Close");
        Close->setGeometry(QRect(855, 8, 15, 15));
        Close->setMinimumSize(QSize(15, 15));
        Close->setMaximumSize(QSize(15, 15));
        Close->setStyleSheet(QString::fromUtf8("background:transparent"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/mainWindow/button/close.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        Close->setIcon(icon2);
        Close->setIconSize(QSize(13, 13));
        Close->setFlat(true);
        url = new QPushButton(centralwidget);
        url->setObjectName("url");
        url->setGeometry(QRect(15, 25, 75, 55));
        url->setMinimumSize(QSize(75, 55));
        url->setMaximumSize(QSize(75, 55));
        url->setStyleSheet(QString::fromUtf8("background:transparent\n"
""));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/mainWindow/button/url_logo.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        url->setIcon(icon3);
        url->setIconSize(QSize(100, 45));
        url->setFlat(true);
        greet = new QLabel(centralwidget);
        greet->setObjectName("greet");
        greet->setGeometry(QRect(115, 30, 81, 45));
        greet->setMinimumSize(QSize(0, 45));
        greet->setMaximumSize(QSize(16777215, 45));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font1.setPointSize(16);
        font1.setBold(true);
        greet->setFont(font1);
        greet->setStyleSheet(QString::fromUtf8("color:#282c34;"));
        line = new QFrame(centralwidget);
        line->setObjectName("line");
        line->setGeometry(QRect(100, 30, 2, 45));
        line->setStyleSheet(QString::fromUtf8("background-color:#9c9c9c;"));
        line->setFrameShadow(QFrame::Shadow::Sunken);
        line->setLineWidth(0);
        line->setFrameShape(QFrame::Shape::VLine);
        config = new QPushButton(centralwidget);
        config->setObjectName("config");
        config->setGeometry(QRect(815, 37, 35, 35));
        config->setMinimumSize(QSize(35, 35));
        config->setMaximumSize(QSize(35, 35));
        config->setStyleSheet(QString::fromUtf8("background:transparent"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/mainWindow/button/config.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        config->setIcon(icon4);
        config->setIconSize(QSize(25, 25));
        config->setFlat(true);
        line_2 = new QFrame(centralwidget);
        line_2->setObjectName("line_2");
        line_2->setGeometry(QRect(795, 41, 2, 25));
        line_2->setStyleSheet(QString::fromUtf8("background-color:#9c9c9c;"));
        line_2->setFrameShadow(QFrame::Shadow::Sunken);
        line_2->setLineWidth(0);
        line_2->setFrameShape(QFrame::Shape::VLine);
        add = new QPushButton(centralwidget);
        add->setObjectName("add");
        add->setGeometry(QRect(680, 37, 105, 35));
        add->setMinimumSize(QSize(105, 35));
        add->setMaximumSize(QSize(105, 35));
        add->setStyleSheet(QString::fromUtf8("background:transparent"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/mainWindow/button/add.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        add->setIcon(icon5);
        add->setIconSize(QSize(100, 25));
        add->setFlat(true);
        greet_emoji = new QLabel(centralwidget);
        greet_emoji->setObjectName("greet_emoji");
        greet_emoji->setGeometry(QRect(180, 35, 35, 35));
        QFont font2;
        font2.setPointSize(16);
        greet_emoji->setFont(font2);
        mainWindow->setCentralWidget(centralwidget);

        retranslateUi(mainWindow);

        QMetaObject::connectSlotsByName(mainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *mainWindow)
    {
        mainWindow->setWindowTitle(QCoreApplication::translate("mainWindow", "Geek-Egret \345\212\251\346\211\213", nullptr));
        Minimize->setText(QString());
        Close->setText(QString());
        url->setText(QString());
        greet->setText(QCoreApplication::translate("mainWindow", "\346\231\232\344\270\212\345\245\275", nullptr));
        config->setText(QString());
        add->setText(QString());
        greet_emoji->setText(QCoreApplication::translate("mainWindow", "\360\237\245\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mainWindow: public Ui_mainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_WINDOW_H
