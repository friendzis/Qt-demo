#ifndef CONTROLGROUP_H
#define CONTROLGROUP_H

#include <QGroupBox>
#include <QHBoxLayout>

#include <QPushButton>

class ControlGroup : public QGroupBox
{
    Q_OBJECT
public:
    ControlGroup();

private:
    QPushButton * m_startButton;
    QPushButton * m_stopButton;
    QPushButton * m_clearButton;
    QPushButton * m_singleCaptureButton;

signals:
    Q_SIGNAL void dataNeeded();
};

#endif // CONTROLGROUP_H
