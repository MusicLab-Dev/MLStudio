/**
 * @ Author: Gonzalez Dorian
 * @ Description: Control Model class
 */

#pragma once

#include <vector>

#include <QObject>
#include <QAbstractListModel>

#include <MLCore/Utils.hpp>
#include <MLAudio/Base.hpp>

class ControlModel : public QAbstractListModel
{
    Q_OBJECT

    Q_PROPERTY(bool _muted READ muted WRITE setMuted NOTIFY mutedChanged)
    Q_PROPERTY(Audio::ParamID _paramID READ paramID)

public:
    /** @brief Roles of each Control */
    enum class Roles {
        Automation = Qt::UserRole + 1
    };

    /** @brief Default constructor */
    explicit ControlModel(QObject *parent = nullptr) noexcept;

    /** @brief Destruct the ControlModel */
    ~ControlModel(void) noexcept = default;

    /** @brief Get the list of all roles */
    [[nodiscard]] QHash<int, QByteArray> roleNames(void) const noexcept override;

    /** @brief Return the count of element in the model */
    [[nodiscard]] int count(void) const noexcept { return  _data->size(); }
    [[nodiscard]] int rowCount(const QModelIndex &) const noexcept override { return count(); }

    /** @brief Get the index controlModel */
    [[nodiscard]] AutomationModel *get(const int index) const;

    /** @brief Get PararmID */
    [[nodiscard]] Audio::ParamID paramID(void) const noexcept { return _paramID; }
    
    /** @brief Get muted */
    [[nodiscard]] bool muted(void) const noexcept { return _muted; }
    
    /** @brief Set the muted property */
    bool setMuted(bool muted) noexcept;

public slots:
    /** @brief Add a children to the list */
    void add(void) noexcept_ndebug;

    /** @brief Remove a children from the list */
    void remove(const int index);

    /** @brief Move Control from to */
    void move(const int from, const int to);

signals:
    /** @brief Notify that muted property has changed */
    void mutedChanged(void);

private:
    Audio::ParamID _paramID;
    bool _muted;
    AutomationModel *_automations;
    Point _manualPoint;
    bool _manualMode;

    Audio::Control *_data;
    std::vector<UniqueAlloc<AutomationModel>> _automations;
}

