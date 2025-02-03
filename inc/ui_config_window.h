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
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CONFIG_WINDOW
{
public:
    QWidget *centralwidget;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QLabel *label;
    QLineEdit *lineEdit;
    QFrame *line;
    QLabel *label_2;
    QFrame *line_2;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QFrame *line_3;
    QToolButton *toolButton;
    QToolButton *toolButton_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QMainWindow *CONFIG_WINDOW)
    {
        if (CONFIG_WINDOW->objectName().isEmpty())
            CONFIG_WINDOW->setObjectName("CONFIG_WINDOW");
        CONFIG_WINDOW->resize(310, 220);
        CONFIG_WINDOW->setMinimumSize(QSize(310, 220));
        CONFIG_WINDOW->setMaximumSize(QSize(310, 220));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/logo/geek_egret/LOGO.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        CONFIG_WINDOW->setWindowIcon(icon);
        CONFIG_WINDOW->setIconSize(QSize(64, 64));
        centralwidget = new QWidget(CONFIG_WINDOW);
        centralwidget->setObjectName("centralwidget");
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(10, 5, 290, 180));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 271, 180));
        scrollAreaWidgetContents->setMinimumSize(QSize(0, 180));
        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName("label");
        label->setGeometry(QRect(5, 30, 101, 20));
        lineEdit = new QLineEdit(scrollAreaWidgetContents);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(90, 30, 150, 20));
        line = new QFrame(scrollAreaWidgetContents);
        line->setObjectName("line");
        line->setGeometry(QRect(4, 55, 355, 1));
        line->setStyleSheet(QString::fromUtf8("background-color:black;"));
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);
        label_2 = new QLabel(scrollAreaWidgetContents);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(5, 5, 80, 15));
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font.setPointSize(10);
        font.setBold(true);
        label_2->setFont(font);
        line_2 = new QFrame(scrollAreaWidgetContents);
        line_2->setObjectName("line_2");
        line_2->setGeometry(QRect(90, 25, 270, 1));
        line_2->setStyleSheet(QString::fromUtf8("background-color:black;"));
        line_2->setFrameShape(QFrame::Shape::HLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);
        label_3 = new QLabel(scrollAreaWidgetContents);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(5, 60, 91, 20));
        lineEdit_2 = new QLineEdit(scrollAreaWidgetContents);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(90, 60, 150, 20));
        line_3 = new QFrame(scrollAreaWidgetContents);
        line_3->setObjectName("line_3");
        line_3->setGeometry(QRect(5, 85, 355, 1));
        line_3->setStyleSheet(QString::fromUtf8("background-color:black;"));
        line_3->setFrameShape(QFrame::Shape::HLine);
        line_3->setFrameShadow(QFrame::Shadow::Sunken);
        toolButton = new QToolButton(scrollAreaWidgetContents);
        toolButton->setObjectName("toolButton");
        toolButton->setGeometry(QRect(245, 30, 25, 20));
        toolButton_2 = new QToolButton(scrollAreaWidgetContents);
        toolButton_2->setObjectName("toolButton_2");
        toolButton_2->setGeometry(QRect(245, 60, 25, 20));
        scrollArea->setWidget(scrollAreaWidgetContents);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(185, 190, 55, 25));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        pushButton->setFont(font1);
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(245, 190, 55, 25));
        pushButton_2->setFont(font1);
        CONFIG_WINDOW->setCentralWidget(centralwidget);

        retranslateUi(CONFIG_WINDOW);

        QMetaObject::connectSlotsByName(CONFIG_WINDOW);
    } // setupUi

    void retranslateUi(QMainWindow *CONFIG_WINDOW)
    {
        CONFIG_WINDOW->setWindowTitle(QCoreApplication::translate("CONFIG_WINDOW", "GE\345\212\251\346\211\213-\350\256\276\347\275\256", nullptr));
        label->setText(QCoreApplication::translate("CONFIG_WINDOW", "ADC \344\270\212\344\275\215\346\234\272", nullptr));
        label_2->setText(QCoreApplication::translate("CONFIG_WINDOW", "\345\272\224\347\224\250\350\267\257\345\276\204\350\256\276\347\275\256", nullptr));
        label_3->setText(QCoreApplication::translate("CONFIG_WINDOW", "\345\220\211\344\273\226\346\227\240\347\272\277\345\212\251\346\211\213", nullptr));
        toolButton->setText(QCoreApplication::translate("CONFIG_WINDOW", "...", nullptr));
        toolButton_2->setText(QCoreApplication::translate("CONFIG_WINDOW", "...", nullptr));
        pushButton->setText(QCoreApplication::translate("CONFIG_WINDOW", "\351\273\230\350\256\244", nullptr));
        pushButton_2->setText(QCoreApplication::translate("CONFIG_WINDOW", "\345\272\224\347\224\250", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CONFIG_WINDOW: public Ui_CONFIG_WINDOW {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIG_WINDOW_H
