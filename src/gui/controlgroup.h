#ifndef CONTROLGROUP_H
#define CONTROLGROUP_H

#include <QGroupBox>
#include <QHBoxLayout>

#include <QPushButton>

class ControlGroup : public QGroupBox
{
public:
    ControlGroup();

private:
    QPushButton * m_startButton;
    QPushButton * m_stopButton;
    QPushButton * m_clearButton;
    QPushButton * m_singleCaptureButton;
};

#endif // CONTROLGROUP_H
