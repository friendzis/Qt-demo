#ifndef CONTROLGROUP_H
#define CONTROLGROUP_H

#include <QGroupBox>
#include <QPushButton>

class ControlGroup : public QGroupBox
{
public:
    ControlGroup();

private:
    QPushButton * m_startButton;
    QPushButton * m_stopButton;
    QPushButton * m_clearButton;
};

#endif // CONTROLGROUP_H
