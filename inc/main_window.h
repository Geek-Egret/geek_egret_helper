#ifndef MAIN_WINDOW_H
#define MAIN_WINDOW_H

#include <QMainWindow>
#include <iostream>
#include <windows.h>

#include <QMouseEvent>

#include "config.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class mainWindow;
}
QT_END_NAMESPACE

// MainWindow
class mainWindow : public QMainWindow
{
    Q_OBJECT

public:
    mainWindow(QWidget *parent = nullptr);
    ~mainWindow();
    
// 必须要有 slot，否则QT无法识别槽函数
private slots:
    // 关闭
    void on_Close_clicked();
    // 最小化
    void on_Minimize_clicked();
    // 官网链接
    void on_url_clicked();
    // 设置
    void on_config_clicked();

    void on_add_clicked();

private:
    Ui::mainWindow*ui;

    // 问候语显示
    void greetingShow();

    virtual void paintEvent(QPaintEvent* event) override;   // 窗口重绘
    virtual void mousePressEvent(QMouseEvent* event) override;  // 鼠标按下事件
    virtual void mouseMoveEvent(QMouseEvent* event) override;   // 鼠标移动事件
    // virtual void mouseReleaseEvent(QMouseEvent* event) override;    // 鼠标释放事件
    virtual void timerEvent(QTimerEvent* e);    // 定时器事件

    int timerID;    // 定时器ID

    QPoint diffPosition; //鼠标和窗口的相对位移
    QPoint windowPosition; //窗口的绝对位置
    QPoint mousePosition; //鼠标的绝对位置
};
#endif // MainWindow_H
