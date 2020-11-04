/**
 * @ Author: Cédric Lucchese
 * @ Description: Device implementation
 */

#include "Device.hpp"

#include <QQmlEngine>

Device::Device(QObject *parent) noexcept
{
    QQmlEngine::setObjectOwnership(this, QQmlEngine::ObjectOwnership::CppOwnership);
}

bool Device::setRecord(bool record) noexcept
{
    if (record() == record)
        return false;
    _data->setRecord(record);
    emit recordChanged();
    return true;
}

bool setSampleRate(int sampleRate) noexcept
{
    if (sampleRate() == sampleRate)
        return false;
    _data->setSampleRate(sampleRate);
    emit sampleRateChanged();
    return true;
}

bool setFormat(const Audio::Device::Format &format) noexcept
{
    if (format() == format)
        return false;
    _data->setFormat(format);
    emit formatChanged();
    return true;
}

bool setChannels(uint8 channels) noexcept
{
    if (channels() == channels)
        return false;
    _data->setChannels(channels);
    emit channelsChanged();
    return true;
}

bool setSample(uint16 sample) noexcept
{
    if (sample() == sample)
        return false;
    emit sampleChanged();
    _data->setSample(sample);
    return true;
}

