#include "dataengine.h"

DataEngine::DataEngine()
{
}

void DataEngine::setCount(int c)
{
    this->m_count = c;
}

QList<int> DataEngine::getData()
{
    QList<int> list;
    for (int i = 0; i < this->m_count; i++)
        list.append(rand());

    return list;
}
