#include "ui_main_window.h"
#include "common.h"

mainWindow::mainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::mainWindow)
{
    // 设置ui
    ui->setupUi(this);

    // 隐藏标题栏
    setWindowFlags(Qt::FramelessWindowHint);
    // 窗口透明化
    setAttribute(Qt::WA_TranslucentBackground);
    // 设置窗口样式
    setStyleSheet(mainWindowStyle);

    // 问候语
    greetingShow();
    
    // 控件鼠标动作颜色
    ui->url->setStyleSheet(buttonColorAction);
    ui->add->setStyleSheet(buttonColorAction);
    ui->config->setStyleSheet(buttonColorAction);

    // 显示设备页面
    deviceWindow* Device = new deviceWindow(this);
    Device->move(0, 90);
    Device->show();

    // 关闭就销毁，释放内存
    setAttribute(Qt::WA_DeleteOnClose, true);

    // 启动定时器 /ms
    timerID = this->startTimer(greetingReflashTime);
}

mainWindow::~mainWindow()
{
    delete ui;
}

// 问候语显示
void mainWindow::greetingShow()
{
    time_t now = time(0);   // 获取当前时间
    tm* nowtm = localtime(&now);    // 格式化时间

    // Emoji Unicode码，加0x00防止Emoji后边乱码
    static char32_t  emojiShow[] = { 0x1F601,0x00 };
    static bool emojiUpdate = true;

    if (nowtm->tm_hour < 6)
    {
        ui->greet->setText("凌晨好");
    }
    else if (nowtm->tm_hour >= 6 && nowtm->tm_hour < 9)
    {
        ui->greet->setText("早晨好");
    }
    else if (nowtm->tm_hour >= 9 && nowtm->tm_hour < 11)
    {
        ui->greet->setText("上午好");
    }
    else if (nowtm->tm_hour >= 11 && nowtm->tm_hour < 13)
    {
        ui->greet->setText("中午好");
    }
    else if (nowtm->tm_hour >= 13 && nowtm->tm_hour < 17)
    {
        ui->greet->setText("下午好");
    }
    else if (nowtm->tm_hour >= 17 && nowtm->tm_hour < 19)
    {
        ui->greet->setText("傍晚好");
    }
    else
    {
        ui->greet->setText("晚上好");
    }
    
    if (emojiUpdate)
    {
        int idx = GeekEgret::randomInt(0, (sizeof(emojiUnicodeRange) / sizeof(emojiUnicodeRange[0])) - 1);
        emojiShow[0] = GeekEgret::randomEmojiUnicode(emojiUnicodeRange[idx][0], emojiUnicodeRange[idx][1]);
        ui->greet_emoji->setText(QString::fromUcs4(emojiShow));
        emojiUpdate = false;
    }
}

// 窗口重绘
void mainWindow::paintEvent(QPaintEvent* event)
{
    QStyleOption opt;
    opt.initFrom(this);
    QPainter painter(this);
    style()->drawPrimitive(QStyle::PE_Widget, &opt, &painter, this);
}
// 鼠标按下事件
void mainWindow::mousePressEvent(QMouseEvent* event)
{
    mousePosition = event->globalPos();
    windowPosition = this->pos();
    diffPosition = mousePosition - windowPosition;
}
// 鼠标移动事件
void mainWindow::mouseMoveEvent(QMouseEvent* event)
{
    QPoint pos = event->globalPos();
    if(diffPosition.y() < 25)
        this->move(pos- diffPosition);
}


// 窗口关闭
void mainWindow::on_Close_clicked()
{
    this->close();
}

// 窗口最小化
void mainWindow::on_Minimize_clicked()
{
    this->showMinimized();
}

// 官网链接按键
void mainWindow::on_url_clicked()
{
    QDesktopServices::openUrl(QUrl(QString("https://geek-egret.top")));
}

// 设置按键
void mainWindow::on_config_clicked()
{
    // 显示设置页面
    configWindow* Config = new configWindow(this);
    Config->move(0, 20);
    Config->show();
}

// 添加设备按键
void mainWindow::on_add_clicked()
{
    // 显示添加设备页面
    addWindow* Add = new addWindow(this);
    Add->move(0, 20);
    Add->show();
}

//重写定时器事件
void mainWindow::timerEvent(QTimerEvent* e)
{
    // 刷新欢迎语
    greetingShow();
}
