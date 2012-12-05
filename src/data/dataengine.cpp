#include "dataengine.h"

DataEngine::DataEngine(int count)
{
    this->m_count = count;
}

void DataEngine::setCount(int c)
{
    this->m_count = c;
    for (int i = 0; i < this->m_count; i++)
        this->m_list.append(0);
}

void DataEngine::fill()
{
    for (int i = 0; i < this->m_count; i++)
        this->m_list.append(rand());
}

QList<int> DataEngine::getData()
{
//    QList<int> list;
//    for (int i = 0; i < this->m_count; i++)
//        list.append(rand());

    return this->m_list;
}

void DataEngine::run()
{
    exec();
}
