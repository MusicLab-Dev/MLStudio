/**
 * @ Author: Gonzalez Dorian
 * @ Description: Automation Model class
 */

#include "AutomationModel.hpp"

QHash<int, QByteArray> roleNames(void) const noexcept override
{
    return QHash<int, QByteArray> {
        { Roles::Point, "point"}
    };
}

const Point &get(const int index) const
{}

bool setMuted(bool muted) const noexcept
{
    if (_muted == muted)
        return false;
    _muted = muted;
    emit mutedChanged();
    return true;
}

void insert(const int index, const Point &point)
{}

void remove(const int index)
{}

void set(const int index, const Point &point)
{}
