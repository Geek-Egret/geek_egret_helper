#ifndef CONFIG_WINDOW_H
#define CONFIG_WINDOW_H

#include <QMainWindow>
#include "common.h"

QT_BEGIN_NAMESPACE
namespace Ui {
    class CONFIG_WINDOW;
}
QT_END_NAMESPACE

// CONFIG_WINDOW
class CONFIG_WINDOW : public QMainWindow
{
    Q_OBJECT

public:
    CONFIG_WINDOW(QWidget* parent = nullptr);
    ~CONFIG_WINDOW();

    // 窗口初始化
    void init();

    // 必须要有 slot，否则QT无法识别槽函数
private slots:

    // ADC 上位机路径选择
    void on_toolButton_clicked();
    // 吉他无线助手路径选择
    void on_toolButton_2_clicked();
    // 应用
    void on_pushButton_2_clicked();
    // 默认
    void on_pushButton_clicked();

private:
    Ui::CONFIG_WINDOW* ui;
};
#endif // CONFIG_WINDOW_H
