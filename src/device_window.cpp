#include "ui_device_window.h"

#include "common.h"

deviceWindow::deviceWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::deviceWindow)
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

    // ui->device_1->setStyleSheet(buttonColorAction);
    // ui->device_2->setStyleSheet(buttonColorAction);

    ui->next->setStyleSheet(buttonColorAction);
    ui->previous->setStyleSheet(buttonColorAction);

    // 设备匹配
    deviceMatch();

    // 页面切换按钮
    pageSwitchButton();

    // 隐藏横向滚动条
    ui->scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    // 显示设备按钮
    deviceButtonShow();

    // 启动定时器 /ms
    timerID = this->startTimer(2);
}

deviceWindow::~deviceWindow()
{
    delete ui;
}

// 设备按键动作
QString deviceWindow::deviceButtonImgAction(std::string imgPath)
{
    QString action;
    action = QString::fromStdString("QPushButton{image:url(" + imgPath + ");}"	// 按键正常背景图片
        "QPushButton:hover{image:url(:/device/start.png);}");	// 鼠标划过背景颜色

    return action;
}

// 页码切换按钮
void deviceWindow::pageSwitchButton()
{
    if (scrollBarValue >= (int)(deviceShowNum.size()-2)*370)
        ui->next->hide();
    else
        ui->next->show();
    if (scrollBarValue <= 0)
        ui->previous->hide();
    else
        ui->previous->show();
}

// 设备匹配
void deviceWindow::deviceMatch()
{
    deviceShowNum.clear();
    for (int idxAddedDeviceLists = 0; idxAddedDeviceLists < addedDeviceLists.size(); idxAddedDeviceLists++)
    {
        for (int idxAllDeviceLists = 0; idxAllDeviceLists < allDeviceNum; idxAllDeviceLists++)
        {
            if (addedDeviceLists[idxAddedDeviceLists].compare(deviceLists[idxAllDeviceLists].deviceName) == 0)
            {
                deviceShowNum.push_back(idxAllDeviceLists);
                break;
            }
        }
    }
    // ui->label->setText(QString::number((int)(deviceShowNum.size() - 2) * 370));
}

// 设备按键显示
void deviceWindow::deviceButtonShow()
{
    QWidget* scrollAreaWidgetContents = new QWidget();
    scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
    scrollAreaWidgetContents->setGeometry(QRect(-2417, 0, 240+ deviceShowNum.size()*370, 331));
    scrollAreaWidgetContents->setMinimumSize(QSize(240 + deviceShowNum.size() * 370, 0));
    // 动态添加，自适应已添加设备列表，支持无限设备添加
    for (int idx = 0; idx < deviceShowNum.size(); idx++)
    {
        deviceButton.push_back(new QPushButton(scrollAreaWidgetContents));
        deviceButton[idx]->setObjectName(deviceLists[deviceShowNum[idx]].deviceName);
        deviceButton[idx]->setGeometry(QRect(240+370*idx, 35, 280, 280));
        deviceButton[idx]->setText(QString());
        ui->scrollArea->setWidget(scrollAreaWidgetContents);
        deviceButtonConfig(deviceButton[idx], idx);
        connect(deviceButton[idx], &QPushButton::clicked, this, &deviceWindow::on_device_button_clicked);
    }
}

// 设备按钮设置
void deviceWindow::deviceButtonConfig(QPushButton* button,int idx)
{
    if (idx < deviceShowNum.size())
    {
        button->show();
        button->setStyleSheet(deviceButtonImgAction(deviceLists[deviceShowNum[idx]].deviceImgPath));
    }
}

// 上一页
void deviceWindow::on_previous_clicked()
{
    scrollBarValue -= 370;

    pageSwitchButton();
}
// 下一页
void deviceWindow::on_next_clicked()
{
    scrollBarValue += 370;

    pageSwitchButton();
}
// 设备按钮
void deviceWindow::on_device_button_clicked()
{
    // 获取是哪个按钮按下
    QPushButton* clickedButton = qobject_cast<QPushButton*>(sender());
    // 匹配按钮名称
    for (int idx = 0; idx < deviceShowNum.size(); idx++)
    {
        if (deviceLists[deviceShowNum[idx]].deviceName == clickedButton->objectName())
        {
            deviceLists[deviceShowNum[idx]].deviceAPP();
            break;
        }
    }
}

// 重写定时器事件
void deviceWindow::timerEvent(QTimerEvent* e)
{
    // 窗口移动动画
    static int scrollBarValueOut = 0;
    if (scrollBarValueOut > scrollBarValue+4)
    {
        scrollBarValueOut -= 7;
    }
    else if (scrollBarValueOut < scrollBarValue-4)
    {
        scrollBarValueOut += 7;
    }

    if (deviceShowNum.size() <= 1)
    {
        ui->scrollArea->horizontalScrollBar()->setValue(scrollBarValueOut);
    }
    else
    {
        ui->scrollArea->horizontalScrollBar()->setValue(scrollBarValueOut+185);
    }
    
}

