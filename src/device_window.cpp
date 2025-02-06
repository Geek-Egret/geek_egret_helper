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

    // 显示设备
    deviceShow();

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
    if (scrollBarValue >= ((deviceShowNum.size() - deviceShowNum.size() % 2) / 2)*370)
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
    // ui->label->setText(QString::number(deviceShowNum.size()));
}

// 设备显示
void deviceWindow::deviceShow()
{
    deviceButtonConfig(ui->device_1, 0);
    deviceButtonConfig(ui->device_2, 1);
    deviceButtonConfig(ui->device_3, 2);
    deviceButtonConfig(ui->device_4, 3);
    deviceButtonConfig(ui->device_5, 4);
    deviceButtonConfig(ui->device_6, 5);
    deviceButtonConfig(ui->device_7, 6);
    deviceButtonConfig(ui->device_8, 7);
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
// 设备1
void deviceWindow::on_device_1_clicked()
{
}
// 设备2
void deviceWindow::on_device_2_clicked()
{
}
// 设备3
void deviceWindow::on_device_3_clicked()
{
}
// 设备4
void deviceWindow::on_device_4_clicked()
{
}
// 设备5
void deviceWindow::on_device_5_clicked()
{
}
// 设备6
void deviceWindow::on_device_6_clicked()
{
}
// 设备7
void deviceWindow::on_device_7_clicked()
{
}
// 设备8
void deviceWindow::on_device_8_clicked()
{
}

// 重写定时器事件
void deviceWindow::timerEvent(QTimerEvent* e)
{
    static int scrollBarValueOut;
    if (scrollBarValueOut > scrollBarValue+4)
    {
        scrollBarValueOut -= 6;
    }
    else if (scrollBarValueOut < scrollBarValue-4)
    {
        scrollBarValueOut += 6;
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

