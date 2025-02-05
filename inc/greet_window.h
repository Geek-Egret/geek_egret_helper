#ifndef GREET_WINDOW_H
#define GREET_WINDOW_H

#include <QMainWindow>
#include <iostream>
#include <windows.h>

#include <QMouseEvent>

#include "config.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class greetWindow;
}
QT_END_NAMESPACE

// greetWindow
class greetWindow : public QWidget
{
    Q_OBJECT

public:
    greetWindow(QWidget *parent = nullptr);
    ~greetWindow();
// 必须要有 slot，否则QT无法识别槽函数
private slots:
private:
    Ui::greetWindow*ui;

    virtual void paintEvent(QPaintEvent* event) override;   // 窗口重绘
    virtual void timerEvent(QTimerEvent* e);    // 定时器事件

    int timerID;    // 定时器ID
};
#endif // MainWindow_H
