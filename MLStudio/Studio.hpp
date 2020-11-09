/**
 * @ Author: Matthieu Moinvaziri
 * @ Description: Studio class
 */

#pragma once

<<<<<<< HEAD
#include <QGuiApplication>
#include <QQmlApplicationEngine>

class Studio;

/**
 * @brief The studio is the instance running the application process
 */
class Studio : protected QGuiApplication
=======
/**
 * @brief The studio is the instance running the application process
 */
class Studio
>>>>>>> 328d48f9059b7bb226f0fb2af1b70de79577eb5e
{
    Q_OBJECT
public:
    Studio(int argc, char *argv[]);

    [[nodiscard]] int run(void);

private:
    QQmlApplicationEngine _engine;
};
