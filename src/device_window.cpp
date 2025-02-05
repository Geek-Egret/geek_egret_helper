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

    pageSwitchButton();

    // 设备匹配
    deviceMatch();

    // 设备显示
    deviceShow();
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
    if (pageNum == (addedDeviceLists.size() + addedDeviceLists.size() % 2) / 2 || addedDeviceLists.size() <= 2)
        ui->next->hide();
    else
        ui->next->show();
    if (pageNum == 1)
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
    if (deviceShowNum.size() - pageNum * 2 == -1)
    {
        ui->device_1->hide();
        ui->device_2->hide();
        ui->device_3->show();
        ui->device_3->setStyleSheet(deviceButtonImgAction(deviceLists[deviceShowNum[pageNum * 2 - 2]].deviceImgPath));
    }
    else if(((deviceShowNum.size() - pageNum * 2) % 2 == 0 || (deviceShowNum.size() - pageNum * 2) % 2== 1) && deviceShowNum.size() > 0)
    {
        ui->device_1->show();
        ui->device_2->show();
        ui->device_3->hide();
        ui->device_1->setStyleSheet(deviceButtonImgAction(deviceLists[deviceShowNum[pageNum * 2 - 2]].deviceImgPath));
        ui->device_2->setStyleSheet(deviceButtonImgAction(deviceLists[deviceShowNum[pageNum * 2 - 1]].deviceImgPath));
    }
    else
    {
        ui->device_1->hide();
        ui->device_2->hide();
        ui->device_3->hide();
    }
}

// 上一页
void deviceWindow::on_previous_clicked()
{
    pageNum -= 1;

    pageSwitchButton();
    deviceShow();
}
// 下一页
void deviceWindow::on_next_clicked()
{
    pageNum += 1;

    pageSwitchButton();
    deviceShow();
}
// 设备1
void deviceWindow::on_device_1_clicked()
{
    deviceLists[deviceShowNum[pageNum * 2 - 2]].deviceAPP();
}

// 设备2
void deviceWindow::on_device_2_clicked()
{
    deviceLists[deviceShowNum[pageNum * 2 - 1]].deviceAPP();
}

