/**
 * @ Author: Cédric Lucchese
 * @ Description: Project header
 */

#pragma once

#include <QObject>

namespace ML
{
    class Project;
}

/**
 * @brief The project own the main node and all the project data
 */

class ML::Project : public QObject
{
    Q_OBJECT

    Q_PROPERTY(NodeModel *master READ master NOTIFY masterChanged)
    Q_PROPERTY(Audio:: Project::PlaybackMode playbackMode READ playbackMode WRITE setPlaybackMode NOTIFY playbackModeChanged)
    Q_PROPERTY(QString name READ name WRITE setName NOTIFY masterChanged)

public:

    enum class PlaybackMode
    {
        Production = 0,
        Live
    };

public:

    explicit Project(QObject *parent = nullptr);

    /**
     * @brief READ the master node
     *
     * @return NodeModel*
     */
    NodeModel *master(void);

    /**
     * @brief READ the master node in const
     *
     * @return NodeModel*
     */
    NodeModel *master(void) const;

    /**
     * @brief READ the playback Mode in const
     *
     * @return Project::PlaybackMode
     */
    Project::PlaybackMode playbackMode(void) const;

    /**
     * @brief Set the Playback Mode
     *
     * @param mode
     * @return true
     * @return false
     */
    bool setPlaybackMode(const Project::playbackMode mode);

    /**
     * @brief READ the name
     *
     * @return const QString&
     */
    const QString &name(void);

    /**
     * @brief Set the Name
     *
     * @param name
     * @return true
     * @return false
     */
    bool setName(const QString &name);

signals:

    void masterChanged(void);
    void playbackModeChanged(void);
    void masterChanged(void);

private:

    Audio::Project *_data;
    UniqueAlloc<NodeModel> _master;

};