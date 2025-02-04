#include "greet_window.h"
#include "main_window.h"
#include "ui_greet_window.h"

#include <QMouseEvent>
#include <QPainter>
#include <QStyleOption>
#include <qobject.h>

#include "common.h"

greetWindow::greetWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::greetWindow)
{
    // 设置ui
    ui->setupUi(this);

    // 隐藏标题栏
    setWindowFlags(Qt::FramelessWindowHint);
    // 窗口透明化
    setAttribute(Qt::WA_TranslucentBackground);

    // 启动定时器 /ms
    timerID = this->startTimer(1500);
}

greetWindow::~greetWindow()
{
    delete ui;
}

// 窗口重绘
void greetWindow::paintEvent(QPaintEvent* event)
{
    QStyleOption opt;
    opt.initFrom(this);
    QPainter painter(this);
    style()->drawPrimitive(QStyle::PE_Widget, &opt, &painter, this);
}
//重写定时器事件
void greetWindow::timerEvent(QTimerEvent* e)
{
    // 显示主页面
    this->close();
    this->killTimer(timerID);
    GeekEgret::Main = new mainWindow();
    GeekEgret::Main->show();
}

