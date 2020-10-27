/**
 * @ Author: Dorian Gonzalez
 * @ Description: InsatancesModel class
 */

#include "InstancesModel.hpp"

QHash<int, QByteArray> ML::InstancesModel::roleNames() const
{
    QHash<int, QByteArray> names;
    names[rangeRole] = "range";
    return names;
}
 
QVariant ML::InstancesModel::data(const QModelIndex & index, int role) const{
    if(index.row() < 0 || index.row() >= count())
        return  QVariant();

    const Audio::BeatRange &beat = _data[index.row()];
    if (role == rangeRole)
        return range();
    return QVariant();
}


int ML::InstancesModel::rowCount(const QModelIndex & parent) const { 
    Q_UNUSED(parent); 
    return count(); 
} 
