#include "main_window.h"
#include "config_window.h"
#include "help_window.h"
#include "ui_main_window.h"

#include "common.h"

MAIN_WINDOW::MAIN_WINDOW(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MAIN_WINDOW)
{
    ui->setupUi(this);
    // setStyleSheet("background-color:#8d8d8d;");
    setWindowFlags(windowFlags() & ~Qt::WindowMinMaxButtonsHint);

}

MAIN_WINDOW::~MAIN_WINDOW()
{
    delete ui;
}

// 确定按下
void MAIN_WINDOW::on_pushButton_2_clicked()
{
    for (int i = 0; i < TOTAL_APP_NUM; i++)
    {
        if (exeOpenFlag[i])
        {
            QProcess::startDetached(JSON.exePaths[i]);
            
        }
    }
}

// 设置按下
void MAIN_WINDOW::on_pushButton_3_clicked()
{
    static CONFIG_WINDOW* configWindow = new CONFIG_WINDOW();
    // 判断窗口是否打开，否则不显示新窗口
    if(!configWindow->isActiveWindow())
    {
        configWindow->show();
        configWindow->init();
    }
    // this->close();
}

// 帮助按下
void MAIN_WINDOW::on_pushButton_4_clicked()
{
    static HELP_WINDOW* helpWindow = new HELP_WINDOW();
    // 判断窗口是否打开，否则不显示新窗口
    if(!helpWindow->isActiveWindow())
    {
        helpWindow->show();
    }
    // this->close();
}

// ADC 上位机
void MAIN_WINDOW::on_pushButton_5_clicked()
{
    static int clickNum = 0;
    clickNum++;
    if (clickNum > 1)
    {
        clickNum = 0;
    }
    if (clickNum % 2 == 0)
    {
        ui->pushButton_5->setStyleSheet(QString::fromUtf8("background:transparent"));
        exeOpenFlag[0] = false;
    }
    else
    {
        ui->pushButton_5->setStyleSheet(optionsChoosingColor);
        exeOpenFlag[0] = true;
    }
}

// 吉他无线助手
void MAIN_WINDOW::on_pushButton_8_clicked()
{
    static int clickNum = 0;
    clickNum++;
    if (clickNum > 1)
    {
        clickNum = 0;
    }
    if (clickNum % 2 == 0)
    {
        ui->pushButton_8->setStyleSheet(QString::fromUtf8("background:transparent"));
        exeOpenFlag[1] = false;
    }
    else
    {
        ui->pushButton_8->setStyleSheet(optionsChoosingColor);
        exeOpenFlag[1] = true;
    }
}








