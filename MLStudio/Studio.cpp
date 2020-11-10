/**
 * @ Author: Matthieu Moinvaziri
 * @ Description: Studio class
 */

#include "Studio.hpp"

Studio::Studio(int argc, char *argv[])
    : _application(argc, argv)
{
    const QUrl url(QStringLiteral("qrc:/Main.qml"));

    QObject::connect(&_engine, &QQmlApplicationEngine::objectCreated, &_application,
        [url](QObject *obj, const QUrl &objUrl) {
            if (!obj && url == objUrl)
                QCoreApplication::exit(-1);
        },
    Qt::QueuedConnection);
    _engine.load(url);
}

int Studio::run(void)
{
    return _application.exec();
}
