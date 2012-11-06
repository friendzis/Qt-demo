#ifndef DATAENGINE_H
#define DATAENGINE_H

#include <QList>

class DataEngine
{
public:
    DataEngine();

    void setCount(int c);
    QList<int> getData();

private:
    int m_count;
};

#endif // DATAENGINE_H
