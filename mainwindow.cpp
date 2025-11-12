#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->button=ui->button;

    ui->button->setGeometry(100,100,100,100);

    ui->button->setStyleSheet("border-radius: 50px;"
                              "color: green;"
                              "background-color: red;"
                              "selection-color: yellow;"
                              "selection-background-color: blue;");

}

MainWindow::~MainWindow()
{
    delete ui;
}
