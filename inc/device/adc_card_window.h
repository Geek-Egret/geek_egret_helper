#ifndef ADC_CARD_WINDOW_H
#define ADC_CARD_WINDOW_H

#include <QWidget>
#include "common.h"

namespace Ui {
class adccardWindow;
}

class adccardWindow : public QWidget
{
    Q_OBJECT

public:
    explicit adccardWindow(QWidget *parent = nullptr);
    ~adccardWindow();

private slots:
    // 返回
    void on_back_clicked();
private:
    Ui::adccardWindow*ui;

    virtual void paintEvent(QPaintEvent* event) override;   // 窗口重绘
};

#endif // ADC_CARD_WINDOW_H
