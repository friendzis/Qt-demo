#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QWidget(parent)
{
    QVBoxLayout * mainLayout = new QVBoxlayout();

    this->setLayout(mainLayout);
}

MainWindow::~MainWindow()
{
    
}
