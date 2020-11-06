/**
 * @ Author: Gonzalez Dorian
 * @ Description: Controls Model implementation
 */

#include "ControlsModel.hpp"

QHash<int, QByteArray> ControlsModel::roleNames(void) const noexcept override
{
    return QHash<int, QByteArray> {
        { Roles::Control, "control"},
        { Roles::Muted, "muted"} 
    };
}

QVariant ControlsModel::data(const QModelIndex &index, int role) const noexcept override
{
    coreAssert(index.row() < 0 || index.row() >= count(),
        throw std::range_error("ControlsModel::data: Given index is not in range"));
    const auto &child = (*_data)[index.row()];
    switch (role) {
        case Roles::Control:
        case Roles::Muted:
            return QVariant();
        default:
            return QVariant();
    }
}

const ControlModel &ControlsModel::get(const int index) const
{}

void ControlsModel::add(const Audio::ParamID id) noexcept_ndebug
{}

void ControlsModel::remove(const int index)
{}

void ControlsModel::move(const int from, const int to)
{}