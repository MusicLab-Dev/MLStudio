/**
 * @ Author: Gonzalez Dorian
 * @ Description: Automation Model class
 */

#pragma once

#include <vector>

#include <QObject>
#include <QAbstractListModel>

#include <MLCore/Utils.hpp>
#include <MLAudio/Base.hpp>

class AutomationModel : public QAbstractListModel
{
    Q_OBJECT

    Q_PROPERTY(bool _muted READ muted WRITE setMuted NOTIFY mutedChanged)

public:
    /** @brief Roles of each Control */
    enum class Roles {
        Point = Qt::UserRole + 1
    };

    /** @brief Default constructor */
    explicit AutomationModel(QObject *parent = nullptr) noexcept;

    /** @brief Destruct the AutomationModel */
    ~AutomationModel(void) noexcept = default;

    /** @brief Get the list of all roles */
    [[nodiscard]] QHash<int, QByteArray> roleNames(void) const noexcept override;

    /** @brief Return the count of element in the model */
    [[nodiscard]] int count(void) const noexcept { return  _data->size(); }
    [[nodiscard]] int rowCount(const QModelIndex &) const noexcept override { return count(); }

    /** @brief Get point index */
    [[nodiscard]] const Point &get(const int index) const;

    /** @brief Get muted */
    [[nodiscard]] bool muted(void) const noexcept { return _muted; }

    /** @brief Set the muted property */
    bool setMuted(bool muted) const noexcept;

public slots:

    /** @brief Insert point at index */
    void insert(const int index, const Point &point);

    /** @brief Remove point at index */
    void remove(const int index);

    /** @brief Set point index */
    void set(const int index, const Point &point);

signals:
    /** @brief Notify that muted property has changed */
    void mutedChanged(void);

private:
    Audio::Automation *_data;
    UniqueAlloc<InstancesModel> _instancesModel;

    bool _muted;
}