#ifndef ADD_WINDOW_H
#define ADD_WINDOW_H

#include <QWidget>

namespace Ui {
class addWindow;
}

class addWindow : public QWidget
{
    Q_OBJECT

public:
    explicit addWindow(QWidget *parent = nullptr);
    ~addWindow();

private slots:
    // 返回
    void on_back_clicked();

private:
    Ui::addWindow* ui;

    virtual void paintEvent(QPaintEvent* event) override;   // 窗口重绘
    // virtual void mouseReleaseEvent(QMouseEvent* event) override;    // 鼠标释放事件
};

#endif // ADD_WINDOW_H
