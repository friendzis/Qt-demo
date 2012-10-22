#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>

#include <QVBoxLayout>
#include <controlgroup.h>

class MainWindow : public QWidget
{
    Q_OBJECT
    
public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    ControlGroup * m_controlGroup;
};

#endif // MAINWINDOW_H
