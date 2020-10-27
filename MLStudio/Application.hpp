/**
 * @ Author: Cédric Lucchese
 * @ Description: Main Application header
 */

#pragma once

#include <memory>
#include <QObject>

namespace ML
{
    class Application;
}

class Application : public QObject
{
    Q_OBJECT

    Q_PROPERTY(ProjectModel *project READ project WRITE setProject NOTIFY projectChanged)
    Q_PROPERTY(DeviceModel *devices READ devices WRITE setDevices NOTIFY devicesChanged)
    Q_PROPERTY(PluginTableModel *plugins READ plugins WRITE setPlugins NOTIFY pluginsChanged)
    Q_PROPERTY(Scheduler *scheduler READ scheduler WRITE setScheduler NOTIFY schedulerChanged)


public:

    explicit Application(QObject *parent = nullptr);

    ProjectModel *project(void) noexcept { return _project; }
    bool setProject(ProjectModel *project) noexcept
    {
        if (_project == project)
            return false;
        _project = project;
        return true;
    }

    DeviceModel *devices(void) noexcept { return _devices; }
    bool setDevices(DeviceModel *devices) noexcept
    {
        if (_devices == devices)
            return false;
        _devices = devices;
        return true;
    }

    PluginTableModel *plugins(void) noexcept { return _plugins; }
    bool setPlugins(PluginTableModel *plugins) noexcept
    {
        if (_plugins == plugins)
            return false;
        _plugins = plugins;
        return true;
    }

    Scheduler *scheduler(void) noexcept { return _scheduler; }
    bool setScheduler(Scheduler *scheduler) noexcept
    {
        if (_scheduler == scheduler)
            return false;
        _scheduler = scheduler;
        return true;
    }


private:

    bool setupScheduler(void);

private:

    std::unique_ptr<ProjectModel> _project;
    std::unique_ptr<DeviceModel> _devices;
    std::unique_ptr<PluginTableModel> _plugins;
    std::unique_ptr<Scheduler> _scheduler;
    std::unique_ptr<Device> _outputDevice;

}
