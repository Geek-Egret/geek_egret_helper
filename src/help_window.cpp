#include "help_window.h"
#include "ui_help_window.h"
#include <iostream>

HELP_WINDOW::HELP_WINDOW(QWidget* parent)
    : QMainWindow(parent)
    , ui(new Ui::HELP_WINDOW)
{
    ui->setupUi(this);
    // setStyleSheet("background-color:#8d8d8d;");
    setWindowFlags(windowFlags() & ~Qt::WindowMinMaxButtonsHint);

}

HELP_WINDOW::~HELP_WINDOW()
{
    delete ui;
}
