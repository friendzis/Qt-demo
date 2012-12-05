#include "mainwindow.h"

// Constructors are always called when a class is instantiated
// A class can have multiple overloaded constructors
// A constructor that has no input parameters (or all parameters have default values)
// is called the default constructor. There shalt be one default constructor per class
MainWindow::MainWindow(QWidget *parent)
// Here we are calling parent class constructor. The beauty of polymorphism
    : QWidget(parent)
{
    QVBoxLayout * mainLayout = new QVBoxLayout();
    // Here we are calling the default constructor, therefore () are not necessary
    this->m_controlGroup = new ControlGroup;

    this->m_dataProvider = new DataEngine();
    this->m_data = new TableModel( this->m_dataProvider->getCount() );

    this->m_view = new QTableView();
    this->m_view->setAlternatingRowColors(true);
    this->m_view->setVerticalScrollMode(QAbstractItemView::ScrollPerItem);

    this->m_view->setModel(this->m_data);

    // Here we add widgets to holding layout. Most visual containers do not accept bare
    // widgets not enlosed in layouts
    mainLayout->addWidget(this->m_controlGroup);
    mainLayout->addWidget(this->m_view);

    // Our fresh baked layout is now set as the contents of our main window
    this->setLayout(mainLayout);

    connect(this->m_controlGroup, SIGNAL(dataNeeded()), this->m_dataProvider, SLOT(fill()));
    connect(this->m_dataProvider, SIGNAL(dataAvailable(QList<int>)), this->m_data, SLOT(append(QList<int>)));
    connect(this->m_controlGroup, SIGNAL(clearNeeded()), this->m_data, SLOT(clear()));
}

MainWindow::~MainWindow()
{ 
}
