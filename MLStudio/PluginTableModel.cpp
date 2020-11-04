/**
 * @ Author: Cédric Lucchese
 * @ Description: Plugin Table Model implementation
 */

#include <stdexcept>

#include <QQmlEngine>

#include "NodeModel.hpp"

PluginTableModel::PluginTableModel(QObject *parent) noexcept
{
    QQmlEngine::setObjectOwnership(this, QQmlEngine::ObjectOwnership::CppOwnership);
}

QHash<int, QByteArray> PluginTableModel::roleNames(void) const noexcept
{
    return QHash<int, QByteArray> {
        { Roles::Name, "name" },
        { Roles::Path, "path" },
        { Roles::SDK, "sdk" },
        { Roles::Tags, "tags" },
        { Roles::Flags, "flags" },
    };
}

QVariant NodeModel::data(const QModelIndex &index, int role) const noexcept_ndebug
{
    coreAssert(index.row() < 0 || index.row() >= count(),
        throw std::range_error("InstancesModel::data: Given index is not in range"));
    const auto &child = (*_data)[index.row()];
    switch (role) {
    case Roles::Name:
        return child.name();
    case Roles::Path:
        return child.path();
    case Roles::SDK:
        return child.sdk();
    case Roles::Tags:
        return child.tags();
    case Roles::Flags:
        return child.flags();
    default:
        return QVariant();
    }
}

IFactory *PluginTableModel::get(const int index)
{
    /** TODO */
}

int PluginTableModel::count(void) const noexcept
{
    /** TODO */
}

void PluginTableModel::add(const QString &path)
{
    /** TODO */
}

void PluginTableModel::remove(const int index)
{
    /** TODO */
}
