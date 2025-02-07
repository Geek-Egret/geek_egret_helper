#include "ui_tool_window.h"

#include "common.h"

toolWindow::toolWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::toolWindow)
{
    ui->setupUi(this);

    // 隐藏标题栏
    setWindowFlags(Qt::FramelessWindowHint);
    // 窗口透明化
    setAttribute(Qt::WA_TranslucentBackground);
    // 设置窗口样式
    setStyleSheet(childWindowStyle);

    // 子窗口镶嵌在父窗口
    setWindowFlags(Qt::CustomizeWindowHint | Qt::FramelessWindowHint);
    hide();

    // 关闭就销毁，释放内存
    setAttribute(Qt::WA_DeleteOnClose, true);

    // 启动定时器 /ms
    // timerID = this->startTimer(2);
}

toolWindow::~toolWindow()
{
    delete ui;
}

// 窗口重绘
void toolWindow::paintEvent(QPaintEvent* event)
{
    QStyleOption opt;
    opt.initFrom(this);
    QPainter painter(this);
    style()->drawPrimitive(QStyle::PE_Widget, &opt, &painter, this);
}

// 返回
void toolWindow::on_back_clicked()
{
    // 显示主页面
    this->close();
    // GeekEgret::Main->show();
}

