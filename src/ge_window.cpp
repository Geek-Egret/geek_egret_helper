#include "ge_window.h"
#include "./ui_ge_window.h"

GE_WINDOW::GE_WINDOW(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::GE_WINDOW)
{
    ui->setupUi(this);
}

GE_WINDOW::~GE_WINDOW()
{
    delete ui;
}
