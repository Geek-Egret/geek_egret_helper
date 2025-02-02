#ifndef HELP_WINDOW_H
#define HELP_WINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
    class HELP_WINDOW;
}
QT_END_NAMESPACE

// HELP_WINDOW
class HELP_WINDOW : public QMainWindow
{
    Q_OBJECT

public:
    HELP_WINDOW(QWidget* parent = nullptr);
    ~HELP_WINDOW();

    // 必须要有 slot，否则QT无法识别槽函数
private slots:

private:
    Ui::HELP_WINDOW* ui;
};
#endif // HELP_WINDOW_H
