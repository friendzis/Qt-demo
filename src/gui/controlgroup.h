#ifndef CONTROLGROUP_H
#define CONTROLGROUP_H

#include <QGroupBox>
#include <QHBoxLayout>

#include <QPushButton>
#include <QTimeEdit>
#include <QTimer>

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

    QTimeEdit * m_timeEdit;
    QTimer * m_timer;

signals:
    Q_SIGNAL void dataNeeded();
    Q_SIGNAL void clearNeeded();

private slots:
    Q_SLOT void timerStart();
};

#endif // CONTROLGROUP_H
