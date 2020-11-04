/**
 * @ Author: Cédric Lucchese
 * @ Description: Plugin Table Model class
 */

#pragma once

#include <QObject>
#include <QAbstractListModel>


/** @brief Plugin Table Model class */
class PluginTableModel : public QAbstractListModel
{
    Q_OBJECT

public:
    /** @brief Roles of each instance */
    enum class Roles {
        Name = Qt::UserRole + 1,
        Path,
        SDK,
        Tags,
        Flags
    };

    /** @brief Default constructor */
    explicit PluginTableModel(QObject *parent = nullptr) noexcept;

    /** @brief Destruct the instance */
    ~PluginTableModel(void) noexcept = default;


    /** @brief Get the list of all roles */
    [[nodiscard]] QHash<int, QByteArray> roleNames(void) const noexcept override;

    /** @brief Return the count of element in the model */
    [[nodiscard]] int count(void) const noexcept { return  _data->size(); }
    [[nodiscard]] int rowCount(const QModelIndex &) const noexcept override { return count(); }

    /** @brief Query a role from children */
    [[nodiscard]] QVariant data(const QModelIndex &index, int role) const noexcept override;


    /** @brief Get an factory instance */
    IFactory *get(const int index);

    /** @brief Get the count of instances */
    int count(void) const noexcept;

public slots:
    /** @brief Add an new instance */
    void add(const QString &path);

    /** @brief Remove an current instance */
    void remove(const int index);

private:
    Audio::PluginTable::Instance _pluginTable {};

}
