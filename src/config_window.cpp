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

    // 子窗口镶嵌在父窗口
    setWindowFlags(Qt::CustomizeWindowHint | Qt::FramelessWindowHint);
    hide();

    // 关闭就销毁，释放内存
    setAttribute(Qt::WA_DeleteOnClose, true);
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

// 返回
void configWindow::on_back_clicked()
{
    // 显示主页面
    this->close();
    // GeekEgret::Main->show();
}

