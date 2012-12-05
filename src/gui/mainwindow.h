#ifndef MAINWINDOW_H
#define MAINWINDOW_H

// Some headers are not necessarily needed as they might be included in other headers.
// But explicitly including all the required headers minimises the risk of error
// and makes it obvious what components class is dependant on.

#include <QWidget>

#include <QVBoxLayout>
#include <QTableView>

#include "src/gui/controlgroup.h"
#include "src/data/TableModel.h"
#include "src/data/dataengine.h"

class MainWindow : public QWidget
{
    // This macro enables Qt functionality (Qt's meta-system)
    // It requires that calling class inherits from QObject
    // (not necessarily directly)
    Q_OBJECT
    
// Public class members (methods/properties) are accessible (callable) from anywhere in
// in the code (provided you have access to an actual object)
public:
    // This is the default constructor
    MainWindow(QWidget *parent = 0);
    //  The destructor
    ~MainWindow();

// Private class members are accessible from any instance of the same class, not only
// the holding instance
private:
    ControlGroup * m_controlGroup;
    QTableView * m_view;
    TableModel * m_data;
    DataEngine * m_dataProvider;
};

#endif // MAINWINDOW_H
