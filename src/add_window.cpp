#include "ui_add_window.h"

#include "common.h"

addWindow::addWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::addWindow)
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

addWindow::~addWindow()
{
    delete ui;
}

// 窗口重绘
void addWindow::paintEvent(QPaintEvent* event)
{
    QStyleOption opt;
    opt.initFrom(this);
    QPainter painter(this);
    style()->drawPrimitive(QStyle::PE_Widget, &opt, &painter, this);
}

// 返回
void addWindow::on_back_clicked()
{
    // 显示主页面
    this->close();
    // GeekEgret::Main->show();
}

