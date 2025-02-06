#ifndef DEVICE_WINDOW_H
#define DEVICE_WINDOW_H

#include <QWidget>
#include "common.h"

namespace Ui {
class deviceWindow;
}

class deviceWindow : public QWidget
{
    Q_OBJECT

public:
    explicit deviceWindow(QWidget *parent = nullptr);
    ~deviceWindow();

    void deviceMatch();
    void deviceButtonShow();
    std::vector<QPushButton*> deviceButton;

private slots:
    void on_previous_clicked();
    void on_next_clicked();
    void on_device_button_clicked();

private:
    Ui::deviceWindow *ui;

    typedef enum
    {
        NEXT = 0,
        PREVIOUS = 1
    }PAGE_PROPERTY;

    QString deviceButtonImgAction(std::string imgPath);
    void pageSwitchButton();
    void deviceButtonConfig(QPushButton* button, int idx);
    virtual void timerEvent(QTimerEvent* e);    // 定时器事件

    int scrollBarValue = 0; // 滚动条值
    int timerID;    // 定时器ID
    std::vector<int> deviceShowNum; // 设备显示序号
    
};

#endif // DEVICE_WINDOW_H
