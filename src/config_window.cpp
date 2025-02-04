#include "config_window.h"
#include "ui_config_window.h"

#include "common.h"

configWindow::configWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::configWindow)
{
    ui->setupUi(this);

    // 隐藏标题栏
    setWindowFlags(Qt::FramelessWindowHint);
    // 窗口透明化
    setAttribute(Qt::WA_TranslucentBackground);
    // 设置窗口样式
    setStyleSheet(childWindowStyle);

    // 控件鼠标动作颜色
    ui->back->setStyleSheet(buttonColorAction);
}

configWindow::~configWindow()
{
    delete ui;
}

// 窗口重绘
void configWindow::paintEvent(QPaintEvent* event)
{
    QStyleOption opt;
    opt.initFrom(this);
    QPainter painter(this);
    style()->drawPrimitive(QStyle::PE_Widget, &opt, &painter, this);
}
// 鼠标按下事件
void configWindow::mousePressEvent(QMouseEvent* event)
{
    mousePosition = event->globalPos();
    windowPosition = this->pos();
    diffPosition = mousePosition - windowPosition;
}
// 鼠标移动事件
void configWindow::mouseMoveEvent(QMouseEvent* event)
{
    QPoint pos = event->globalPos();

    this->move(pos - diffPosition);
}


// 窗口关闭
void configWindow::on_Close_clicked()
{
    this->close();
}

// 窗口最小化
void configWindow::on_Minimize_clicked()
{
    this->showMinimized();
}

// 返回
void configWindow::on_back_clicked()
{
    // 显示主页面
    this->close();
    GeekEgret::Main->show();
}

