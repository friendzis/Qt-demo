#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QWidget(parent)
{
    QVBoxLayout * mainLayout = new QVBoxLayout();
    this->m_controlGroup = new ControlGroup;

    mainLayout->addWidget(this->m_controlGroup);

    this->setLayout(mainLayout);
}

MainWindow::~MainWindow()
{
    
}
