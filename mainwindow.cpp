#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QWidget(parent)
{
    QVBoxLayout * mainLayout = new QVBoxLayout();

    this->setLayout(mainLayout);
}

MainWindow::~MainWindow()
{
    
}
