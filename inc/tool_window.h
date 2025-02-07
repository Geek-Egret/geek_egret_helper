#ifndef TOOL_WINDOW_H
#define TOOL_WINDOW_H

#include <QWidget>
#include "common.h"

namespace Ui {
    class toolWindow;
}

class toolWindow : public QWidget
{
    Q_OBJECT

public:
    explicit toolWindow(QWidget* parent = nullptr);
    ~toolWindow();

private slots:
    // 返回
    void on_back_clicked();

private:
    Ui::toolWindow* ui;

    virtual void paintEvent(QPaintEvent* event) override;   // 窗口重绘

};

#endif // TOOL_WINDOW_H
