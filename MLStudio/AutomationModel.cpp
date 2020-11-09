/**
 * @ Author: Gonzalez Dorian
 * @ Description: Automation Model class
 */

#include "AutomationModel.hpp"

AutomationModel::AutomationModel(QObject *parent, Audio::Automation *automation) noexcept
    : QAbstractListModel(parent), _data(automation)
{
    QQmlEngine::setObjectOwnership(this, QQmlEngine::ObjectOwnership::CppOwnership);
}

QHash<int, QByteArray> AutomationModel::roleNames(void) const noexcept override
{
    return QHash<int, QByteArray> {
        { Roles::Point, "point" }
    };
}

QVariant AutomationModel::data(const QModelIndex &index, int role) const override
{
    const auto &child = get(index.row());
    switch (role) {
    case Roles::Point:
        return child.get();
    default:
        return QVariant();
    }
}

const Point &AutomationModel::get(const int index) const noexcept_ndebug
{
    coreAssert(index < 0 || index >= count(),
        throw std::range_error("AutomationModel::get: Given index is not in range"));
    return _data->points().at(index);
}

void AutomationModel::add(const Point &point) noexcept
{
    beginResetModel();
    _data->points().push(point);
    endResetModel();
}

void AutomationModel::remove(const int index) noexcept_ndebug
{
    coreAssert(index < 0 || index >= count(),
        throw std::range_error("AutomationModel::remove: Given index is not in range"));
    beginRemoveRows(QModelIndex(), index, index);
    _data->points().erase(_data->points().begin() + index);
    endRemoveRows();
}

void AutomationModel::set(const int index, const Point &point) noexcept_ndebug
{
    coreAssert(index < 0 || index >= count(),
        throw std::range_error("AutomationModel::remove: Given index is not in range"));
    _data->points().at(index) = point;
    // _data->points().sort()
    const auto modelIndex = QAbstractListModel::index(index, 0);
    emit dataChanged(modelIndex, modelIndex, { Roles::Point });
}
