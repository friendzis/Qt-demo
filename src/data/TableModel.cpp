#include "TableModel.h"

TableModel::TableModel(int c)
{
    this->m_columns = c;
}

void TableModel::append(QList<int> list)
{
    Q_EMIT beginInsertRows(QModelIndex(), this->m_data.size(), this->m_data.size());

    this->m_data.append(list);

    Q_EMIT endInsertRows();
}

void TableModel::clear()
{
    Q_EMIT beginRemoveRows(QModelIndex(), 0, this->m_data.size()-1);

    this->m_data.clear();

    Q_EMIT endRemoveRows();
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
    if (!index.isValid())
        return QVariant();

    if (index.row() >= this->m_data.size())
        return QVariant();

    if (index.column() >= this->m_columns)
        return QVariant();

    switch (role)
    {
    case Qt::DisplayRole:
        return this->m_data.at(index.row()).at(index.column());
    break;
    }
}
