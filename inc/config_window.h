#ifndef CONFIG_WINDOW_H
#define CONFIG_WINDOW_H

#include <QWidget>

namespace Ui {
class configWindow;
}

class configWindow : public QWidget
{
    Q_OBJECT

public:
    explicit configWindow(QWidget *parent = nullptr);
    ~configWindow();

private slots:
    // 返回
    void on_back_clicked();

private:
    Ui::configWindow *ui;

    virtual void paintEvent(QPaintEvent* event) override;   // 窗口重绘

};

#endif // CONFIG_WINDOW_H
