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
    inline NodeModel *master(void) noexcept { return _master; }

    /**
     * @brief READ the master node in const
     *
     * @return NodeModel*
     */
    inline NodeModel *master(void) const noexcept { return _master; }

    /**
     * @brief READ the playback Mode in const
     *
     * @return Project::PlaybackMode
     */
    inline Project::PlaybackMode playbackMode(void) const noexcept { return _playbackMode};

    /**
     * @brief Set the Playback Mode
     *
     * @param mode
     * @return true
     * @return false
     */
    bool setPlaybackMode(const Project::playbackMode mode) noexcept
    {
        if (_playbackMode == mode)
            return false;
        _playbackMode = mode;
        return true;
    }

    /**
     * @brief READ the name
     *
     * @return const QString&
     */
    inline const QString &name(void) noexcept { return _name; }

    /**
     * @brief Set the Name
     *
     * @param name
     * @return true
     * @return false
     */
    bool setName(const QString &name) noexcept
    {
        if (_name == name)
            return false;
        _name = name;
        return true;
    }

signals:

    void masterChanged(void);
    void playbackModeChanged(void);
    void masterChanged(void);

private:

    Audio::Project *_data;
    Audio::Project::PlaybackMode _playbackMode;
    UniqueAlloc<NodeModel> _master;

};