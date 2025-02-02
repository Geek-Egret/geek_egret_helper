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
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MAIN_WINDOW
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QPushButton *pushButton_5;
    QPushButton *pushButton_8;
    QFrame *line;
    QFrame *line_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QFrame *line_6;
    QFrame *line_7;
    QPushButton *pushButton;
    QFrame *line_3;

    void setupUi(QMainWindow *MAIN_WINDOW)
    {
        if (MAIN_WINDOW->objectName().isEmpty())
            MAIN_WINDOW->setObjectName("MAIN_WINDOW");
        MAIN_WINDOW->resize(255, 152);
        MAIN_WINDOW->setMinimumSize(QSize(255, 152));
        MAIN_WINDOW->setMaximumSize(QSize(255, 152));
        MAIN_WINDOW->setMouseTracking(false);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/logo/geek_egret/LOGO.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        MAIN_WINDOW->setWindowIcon(icon);
        MAIN_WINDOW->setWindowOpacity(1.000000000000000);
        MAIN_WINDOW->setAutoFillBackground(false);
        MAIN_WINDOW->setIconSize(QSize(30, 25));
        centralwidget = new QWidget(MAIN_WINDOW);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 4, 54, 21));
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font.setPointSize(10);
        font.setBold(true);
        label->setFont(font);
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(10, 30, 180, 112));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 161, 115));
        scrollAreaWidgetContents->setMinimumSize(QSize(0, 115));
        pushButton_5 = new QPushButton(scrollAreaWidgetContents);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(0, 0, 161, 22));
        pushButton_5->setStyleSheet(QString::fromUtf8("background:transparent"));
        pushButton_5->setFlat(true);
        pushButton_8 = new QPushButton(scrollAreaWidgetContents);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(0, 22, 161, 22));
        pushButton_8->setStyleSheet(QString::fromUtf8("background:transparent"));
        pushButton_8->setFlat(true);
        line = new QFrame(scrollAreaWidgetContents);
        line->setObjectName("line");
        line->setGeometry(QRect(4, 22, 153, 1));
        line->setStyleSheet(QString::fromUtf8("background-color:black;"));
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);
        line_2 = new QFrame(scrollAreaWidgetContents);
        line_2->setObjectName("line_2");
        line_2->setGeometry(QRect(4, 44, 153, 1));
        line_2->setStyleSheet(QString::fromUtf8("background-color:black;"));
        line_2->setFrameShape(QFrame::Shape::HLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);
        scrollArea->setWidget(scrollAreaWidgetContents);
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(195, 35, 55, 25));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font1.setPointSize(11);
        font1.setBold(true);
        pushButton_2->setFont(font1);
        pushButton_2->setCheckable(false);
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(195, 73, 55, 25));
        pushButton_3->setFont(font1);
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(195, 111, 55, 25));
        pushButton_4->setFont(font1);
        line_6 = new QFrame(centralwidget);
        line_6->setObjectName("line_6");
        line_6->setGeometry(QRect(66, 4, 1, 23));
        line_6->setStyleSheet(QString::fromUtf8("background-color:black;"));
        line_6->setFrameShape(QFrame::Shape::VLine);
        line_6->setFrameShadow(QFrame::Shadow::Sunken);
        line_7 = new QFrame(centralwidget);
        line_7->setObjectName("line_7");
        line_7->setGeometry(QRect(66, 26, 185, 1));
        line_7->setStyleSheet(QString::fromUtf8("background-color:black;"));
        line_7->setFrameShape(QFrame::Shape::HLine);
        line_7->setFrameShadow(QFrame::Shadow::Sunken);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(70, 4, 181, 20));
        pushButton->setStyleSheet(QString::fromUtf8("background:transparent"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/MyGo_Embeded/HIHI_BACKGROUND.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton->setIcon(icon1);
        pushButton->setIconSize(QSize(183, 102));
        pushButton->setFlat(true);
        line_3 = new QFrame(centralwidget);
        line_3->setObjectName("line_3");
        line_3->setGeometry(QRect(194, 141, 57, 1));
        line_3->setStyleSheet(QString::fromUtf8("background-color:black;"));
        line_3->setFrameShape(QFrame::Shape::HLine);
        line_3->setFrameShadow(QFrame::Shadow::Sunken);
        MAIN_WINDOW->setCentralWidget(centralwidget);
        scrollArea->raise();
        label->raise();
        pushButton_2->raise();
        pushButton_3->raise();
        pushButton_4->raise();
        line_6->raise();
        line_7->raise();
        pushButton->raise();
        line_3->raise();

        retranslateUi(MAIN_WINDOW);

        QMetaObject::connectSlotsByName(MAIN_WINDOW);
    } // setupUi

    void retranslateUi(QMainWindow *MAIN_WINDOW)
    {
        MAIN_WINDOW->setWindowTitle(QCoreApplication::translate("MAIN_WINDOW", "GE\345\212\251\346\211\213", nullptr));
        label->setText(QCoreApplication::translate("MAIN_WINDOW", "\344\272\247\345\223\201\351\200\211\346\213\251", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MAIN_WINDOW", "ADC \344\270\212\344\275\215\346\234\272", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MAIN_WINDOW", "\345\220\211\344\273\226\346\227\240\347\272\277\345\212\251\346\211\213", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MAIN_WINDOW", "\347\241\256\350\256\244", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MAIN_WINDOW", "\350\256\276\347\275\256", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MAIN_WINDOW", "\345\270\256\345\212\251", nullptr));
        pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MAIN_WINDOW: public Ui_MAIN_WINDOW {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_WINDOW_H
