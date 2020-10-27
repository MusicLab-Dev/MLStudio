/**
 * @ Author: Dorian Gonzalez
 * @ Description: InsatancesModel class
 */

#pragma once

#include <QObject>
#include <QAbstractListModel>

namespace ML
{
    class InstancesModel;
}

/**
 * @brief The studio is the instance running the application process
 */
class ML::InstancesModel : public QAbstractListModel
{
    Q_OBJECT
public:

    enum InstancesModelRoles {
        rangeRole = Qt::UserRole + 1
    };

    InstancesModel(QObject *parent = nullptr);
    ~InstancesModel() = default;

    int rowCount(const QModelIndex &p) const;

    QVariant data(const QModelIndex &index, int role) const;

    QHash<int, QByteArray> roleNames() const;

    void add(const Audio::BeatRange &range);

    void remove(const int index);
    
    const Audio::BeatRange& get(const int index) const;
    
    int count(void) const;
    
    void move(const int index, const Audio::BeatRange &range);

public slots:

    void range();


private:
    Audio::BeatRange *_data
};