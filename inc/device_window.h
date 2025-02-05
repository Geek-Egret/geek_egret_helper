#ifndef DEVICE_WINDOW_H
#define DEVICE_WINDOW_H

#include <QWidget>

namespace Ui {
class deviceWindow;
}

class deviceWindow : public QWidget
{
    Q_OBJECT

public:
    explicit deviceWindow(QWidget *parent = nullptr);
    ~deviceWindow();

private slots:
    void on_previous_clicked();
    void on_next_clicked();
    void on_device_1_clicked();
    void on_device_2_clicked();
private:
    Ui::deviceWindow *ui;

    QString deviceButtonImgAction(std::string imgPath);
    void pageSwitchButton();
    void deviceMatch();
    void deviceShow();

    int pageNum = 1; // 页数
    std::vector<int> deviceShowNum; // 设备显示序号
};

#endif // DEVICE_WINDOW_H
