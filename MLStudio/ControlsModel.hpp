/**
 * @ Author: Gonzalez Dorian
 * @ Description: Controls Model class
 */

#pragma once

#include <vector>

#include <QObject>
#include <QAbstractListModel>

#include <MLCore/Utils.hpp>
#include <MLAudio/Base.hpp>

class ControlsModel : public QAbstractListModel
{
    Q_OBJECT

public:
    /** @brief Roles of each Controls */
    enum class Roles {
        Control = Qt::UserRole + 1,
        Muted
    };

    /** @brief Default constructor */
    explicit ControlsModel(QObject *parent = nullptr) noexcept;

    /** @brief Destruct the ControlsModel */
    ~ControlsModel(void) noexcept = default;

    /** @brief Get the list of all roles */
    [[nodiscard]] QHash<int, QByteArray> roleNames(void) const noexcept override;

    /** @brief Return the count of element in the model */
    [[nodiscard]] int count(void) const noexcept { return  _data->size(); }
    [[nodiscard]] int rowCount(const QModelIndex &) const noexcept override { return count(); }

    /** @brief Query a role from children */
    [[nodiscard]] QVariant data(const QModelIndex &index, int role) const noexcept override;

    /** @brief Get the index controlModel */
    [[nodiscard]] const ControlModel &get(const int index) const;

public slots:
    /** @brief Add a children to the list */
    void add(const Audio::ParamID id) noexcept_ndebug;

    /** @brief Remove a children from the list */
    void remove(const int index);

    /** @brief Move Control from to */
    void move(const int from, const int to);

private:
    Audio::Controls *_data;
    std::vector<UniqueAlloc<ControlModel>> _models;
}