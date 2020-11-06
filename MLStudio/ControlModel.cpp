/**
 * @ Author: Gonzalez Dorian
 * @ Description: Control Model class
 */

#include "ControlModel.hpp"

QHash<int, QByteArray> ControlModel::roleNames(void) const noexcept override
{
    return QHash<int, QByteArray> {
        { Roles::Automation, "automation"}
    };
}

AutomationModel *ControlModel::get(const int index) const
{}

void ControlModel::add(void) noexcept_ndebug
{}

void ControlModel::remove(const int index)
{}

void ControlModel::move(const int from, const int to)
{}

bool ControlModel::setMuted(bool muted) noexcept
{
    if (_muted == muted)
        return false;
    _muted = muted;
    emit mutedChanged();
    return true;
}