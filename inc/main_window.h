#ifndef MAIN_WINDOW_H
#define MAIN_WINDOW_H

#include <QMainWindow>
#include <iostream>
#include <windows.h>

#include "config.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MAIN_WINDOW;
}
QT_END_NAMESPACE

// MAIN_WINDOW
class MAIN_WINDOW : public QMainWindow
{
    Q_OBJECT

public:
    MAIN_WINDOW(QWidget *parent = nullptr);
    ~MAIN_WINDOW();
// 必须要有 slot，否则QT无法识别槽函数
private slots:
    // 确认
    void on_pushButton_2_clicked();
    // 设置
    void on_pushButton_3_clicked();
    // 帮助
    void on_pushButton_4_clicked();
    // ADC 上位机
    void on_pushButton_5_clicked();
    // 吉他无线助手
    void on_pushButton_8_clicked();

private:
    Ui::MAIN_WINDOW*ui;
    bool exeOpenFlag[TOTAL_APP_NUM] = { false };
};
#endif // MAIN_WINDOW_H
