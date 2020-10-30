/**
 * @ Author: Dorian Gonzalez
 * @ Description: InsatancesModel class
 */

#include <stdexcept>

#include "InstancesModel.hpp"

QHash<int, QByteArray> InstancesModel::roleNames(void) const noexcept
{
    return QHash<int, QByteArray> {
        { Roles::Range, "range "}
    };
}
 
QVariant InstancesModel::data(const QModelIndex &index, int role) const noexcept_ndebug
{
    coreAssert(index.row() < 0 || index.row() >= count(),
        throw std::range_error("InstancesModel::data: Given index is not in range"));
    const auto &child = (*_data)[index.row()];
    switch (role) {
    case Roles::Range:
        return child;
    default:
        return QVariant();
    }
}

const Audio::BeatRange &InstancesModel::get(const int index) const
{

}

void InstancesModel::add(const Audio::BeatRange &range) noexcept_ndebug
{

}

void InstancesModel::remove(const int index)
{

}

void InstancesModel::move(const int index, const Audio::BeatRange &range) noexcept_ndebug
{

}