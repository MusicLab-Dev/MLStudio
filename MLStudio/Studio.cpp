/**
 * @ Author: Matthieu Moinvaziri
 * @ Description: Studio class
 */

#include "Studio.hpp"

<<<<<<< HEAD
Studio::Studio(int argc, char *argv[])
    : QGuiApplication(argc, argv)
=======
void Studio::run(void)
>>>>>>> 328d48f9059b7bb226f0fb2af1b70de79577eb5e
{
    const QUrl url(QStringLiteral("qrc:/Main.qml"));

    QObject::connect(&_engine, &QQmlApplicationEngine::objectCreated, this,
        [url](QObject *obj, const QUrl &objUrl) {
            if (!obj && url == objUrl)
                QCoreApplication::exit(-1);
        },
    Qt::QueuedConnection);

    _engine.load(url);
}

int Studio::run(void)
{
    return QGuiApplication::exec();
}
