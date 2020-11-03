/**
 * @ Author: Cédric Lucchese
 * @ Description: Device implementation
 */

#include "Device.hpp"

bool Device::setRecord(bool record) noexcept
{
    if (record() == record)
        return false;
    _data->setRecord(record);
    return true;
}

bool setSampleRate(int sampleRate) noexcept
{
    if (sampleRate() == sampleRate)
        return false;
    _data->setSampleRate(sampleRate);
    return true;
}

bool setFormat(const Audio::Device::Format &format) noexcept
{
    if (format() == format)
        return false;
    _data->setFormat(format);
    return true;
}

bool setChannels(uint8 channels) noexcept
{
    if (channels() == channels)
        return false;
    _data->setChannels(channels);
    return true;
}

bool setSample(uint16 sample) noexcept
{
    if (sample() == sample)
        return false;
    _data->setSample(sample);
    return true;
}

