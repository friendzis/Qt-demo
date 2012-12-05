#include "controlgroup.h"

ControlGroup::ControlGroup()
// QObject::tr() handles translations. Now it is sufficient to provide translations file
// and this string can be automagically tranlated. Kewl!
    : QGroupBox(tr("Application control"))
{
    QHBoxLayout * mainLayout = new QHBoxLayout();

    // Qt allows to assign shortcuts (alt+symbol) to clickable objects
    // by preceding a symbol with &. The assignment is handled automagically. Convenient :)
    this->m_startButton = new QPushButton(tr("&Start"));

    // Without explicitly providing class scope the compiler first tries to take
    // variable of same name in function scope. If that fails - tries more global scope
    // which is class scope. Then goes namespaces, etc.
    m_stopButton = new QPushButton(tr("S&top"));

    this->m_clearButton = new QPushButton(tr("&Clear"));

    this->m_singleCaptureButton = new QPushButton(tr("Signle &Capture"));

    this->m_timeEdit = new QTimeEdit();

    mainLayout->addWidget(this->m_startButton);
    mainLayout->addWidget(this->m_stopButton);
    mainLayout->addWidget(this->m_clearButton);
    mainLayout->addSpacing(30);
    mainLayout->addWidget(this->m_singleCaptureButton);
    mainLayout->addSpacing(60);
    mainLayout->addStretch();
    mainLayout->addWidget(this->m_timeEdit);

    this->setLayout(mainLayout);

    connect(this->m_singleCaptureButton, SIGNAL(clicked()), this, SIGNAL(dataNeeded()));
}
