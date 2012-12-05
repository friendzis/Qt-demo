#ifndef TABLEMODEL_H
#define TABLEMODEL_H

#include <QAbstractTableModel>
#include <QList>

class TableModel : public QAbstractTableModel
{
    Q_OBJECT
public:
    explicit TableModel(int c);

    int rowCount(const QModelIndex &parent) const;
    int columnCount(const QModelIndex &parent) const;
    QVariant data(const QModelIndex &index, int role) const;

private:
    int m_columns;
    QList<QList<int> > m_data;

public slots:
    Q_SLOT void append(QList<int>);
};

#endif // TABLEMODEL_H
