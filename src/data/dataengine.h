#ifndef DATAENGINE_H
#define DATAENGINE_H

#include <QList>

#include <QThread>

class DataEngine : public QThread
{
    Q_OBJECT
public:
    DataEngine(int count = 3);
    void setCount(int c);
    inline int getCount() { return this->m_count; }
    void run();

    QList<int> getData();

private:
    void fill();

    int m_count;
    QList<int> m_list;
};

#endif // DATAENGINE_H
