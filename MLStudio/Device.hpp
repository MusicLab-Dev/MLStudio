/**
 * @ Author: Cédric Lucchese
 * @ Description: Device class
 */

#pragma once

#include <QObject>

class Device : public QObject
{
    Q_OBJECT

    Q_PROPERTY(bool record READ record WRITE setRecord NOTIFY recordChanged)
    Q_PROPERTY(int sampleRate READ sampleRate WRITE setSampleRate NOTIFY recordChanged)
    Q_PROPERTY(Audio::Device::Format format READ format WRITE setFormat NOTIFY formatChanged)
    Q_PROPERTY(uint8 channel READ channel WRITE setChannel NOTIFY channelChanged)
    Q_PROPERTY(uint16 sample READ sample WRITE setSample NOTIFY sampleChanged)

public:

private:
    Audio::DevicePtr _data;
}