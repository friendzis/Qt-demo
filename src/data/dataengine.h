#ifndef DATAENGINE_H
#define DATAENGINE_H

#include <QList>

#include <QThread>

class DataEngine : public QThread
{
public:
    DataEngine(int count = 3);
    void setCount(int c);
    void run();

    QList<int> getData();

private:
    void fill();

    int m_count;
    QList<int> m_list;
};

#endif // DATAENGINE_H
