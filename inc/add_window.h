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
    // 关闭
    void on_Close_clicked();
    // 最小化
    void on_Minimize_clicked();
    // 返回
    void on_back_clicked();

private:
    Ui::addWindow* ui;

    virtual void paintEvent(QPaintEvent* event) override;   // 窗口重绘
    virtual void mousePressEvent(QMouseEvent* event) override;  // 鼠标按下事件
    virtual void mouseMoveEvent(QMouseEvent* event) override;   // 鼠标移动事件
    // virtual void mouseReleaseEvent(QMouseEvent* event) override;    // 鼠标释放事件

    QPoint diffPosition; //鼠标和窗口的相对位移
    QPoint windowPosition; //窗口的绝对位置
    QPoint mousePosition; //鼠标的绝对位置
};

#endif // ADD_WINDOW_H
