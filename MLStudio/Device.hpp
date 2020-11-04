/**
 * @ Author: Cédric Lucchese
 * @ Description: Device class
 */

#pragma once

#include <QObject>

#include <MLAudio/Device.hpp>

/** @brief Device class */
class Device : public QObject
{
    Q_OBJECT

    Q_PROPERTY(bool record READ record WRITE setRecord NOTIFY recordChanged)
    Q_PROPERTY(int sampleRate READ sampleRate WRITE setSampleRate NOTIFY recordChanged)
    Q_PROPERTY(Audio::Device::Format format READ format WRITE setFormat NOTIFY formatChanged)
    Q_PROPERTY(uint8 channels READ channels WRITE setChannels NOTIFY channelsChanged)
    Q_PROPERTY(uint16 sample READ sample WRITE setSample NOTIFY sampleChanged)

public:
    /** @brief Default constructor */
    explicit Device(QObject *parent = nullptr) noexcept;

    /** @brief Destruct the instance */
    ~Device(void) noexcept = default;

    /** @brief Get the record */
    [[nodiscard]] bool record(void) const noexcept { /* TODO*/ }

    /** @brief Set the record */
    bool setRecord(bool record) noexcept;

    /** @brief Get the sample rate */
    [[nodiscard]] int sampleRate(void) const noexcept { return _data->sampleRate(); }

    /** @brief SET the sample rate */
    bool setSampleRate(int sampleRate) noexcept;

    /** @brief Get the format */
    [[nodiscard]] const Audio::Device::Format &format(void) const noexcept { return _data->format(); }

    /** @brief Set the format */
    bool setFormat(const Audio::Device::Format &format) noexcept;

    /** @brief Get the channels */
    [[nodiscard]] uint8 channels(void) const noexcept { return _data->channels(); }

    /** @brief Set the channels */
    bool setChannels(uint8 channels) noexcept;

    /** @brief GET the record */
    [[nodiscard]] uin16 sample(void) const noexcept { return _data->sample(); }

    /** @brief SET the record */
    bool setSample(uint16 sample) noexcept;

signals:

    /** @brief Notify that record property has changed */
    void recordChanged(void);

    /** @brief Notify that sample rate property has changed */
    void sampleRateChanged(void);

    /** @brief Notify that format property has changed */
    void formatChanged(void);

    /** @brief Notify that channels property has changed */
    void channelsChanged(void);

    /** @brief Notify that sample property has changed */
    void sampleChanged(void);

private:
    Audio::DevicePtr _data {};
}