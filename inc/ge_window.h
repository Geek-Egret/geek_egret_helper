#ifndef GE_WINDOW_H
#define GE_WINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class GE_WINDOW;
}
QT_END_NAMESPACE

class GE_WINDOW : public QMainWindow
{
    Q_OBJECT

public:
    GE_WINDOW(QWidget *parent = nullptr);
    ~GE_WINDOW();

private:
    Ui::GE_WINDOW *ui;
};
#endif // GE_WINDOW_H
