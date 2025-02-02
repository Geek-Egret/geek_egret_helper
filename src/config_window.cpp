#include "config_window.h"
#include "ui_config_window.h"
#include "common.h"

CONFIG_WINDOW::CONFIG_WINDOW(QWidget* parent)
    : QMainWindow(parent)
    , ui(new Ui::CONFIG_WINDOW)
{
    ui->setupUi(this);
    // setStyleSheet("background-color:#8d8d8d;");
    setWindowFlags(windowFlags() & ~Qt::WindowMinMaxButtonsHint);

}

CONFIG_WINDOW::~CONFIG_WINDOW()
{
    delete ui;
}

// 窗口初始化
void CONFIG_WINDOW::init()
{
    ui->lineEdit->setText(JSON.exePaths[0]);
    ui->lineEdit_2->setText(JSON.exePaths[1]);
}

// ADC 上位机路径选择
void CONFIG_WINDOW::on_toolButton_clicked()
{
    QString exePath = QFileDialog::getOpenFileName(this, "请选择应用路径", "./");
    if (!exePath.isEmpty())
    {
        ui->lineEdit->setText(exePath);
    }
}

// 吉他无线助手路径选择
void CONFIG_WINDOW::on_toolButton_2_clicked()
{
    QString exePath = QFileDialog::getOpenFileName(this, "请选择应用路径", "./");
    if (!exePath.isEmpty())
    {
        ui->lineEdit_2->setText(exePath);
    }
}

// 应用
void CONFIG_WINDOW::on_pushButton_2_clicked()
{
    std::vector<QString> exePathSwap;
    exePathSwap.clear();
    exePathSwap.swap(JSON.exePaths);

    if (!(ui->lineEdit->text().isEmpty()))
    {
        JSON.exePaths.push_back(QDir::toNativeSeparators(ui->lineEdit->text()));
    }
    else
    {
        JSON.exePaths.push_back(exePathSwap[0]);
    }
    if (!(ui->lineEdit_2->text().isEmpty()))
    {
        JSON.exePaths.push_back(QDir::toNativeSeparators(ui->lineEdit_2->text()));
    }
    else
    {
        JSON.exePaths.push_back(exePathSwap[1]);
    }
    JSON.configFileWrite(JSON.PATHS);
}

// 默认
void CONFIG_WINDOW::on_pushButton_clicked()
{

}