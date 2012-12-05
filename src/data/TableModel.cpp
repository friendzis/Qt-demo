#include "TableModel.h"

TableModel::TableModel(int c)
{
    this->m_columns = c;
}

void TableModel::append(QList<int>)
{
}

int TableModel::rowCount(const QModelIndex &parent) const
{
    return this->m_data.size();
}

int TableModel::columnCount(const QModelIndex &parent) const
{
    return this->m_columns;
}

QVariant TableModel::data(const QModelIndex &index, int role) const
{
}
