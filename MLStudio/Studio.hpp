/**
 * @ Author: Matthieu Moinvaziri
 * @ Description: Studio class
 */

#pragma once

#include <QGuiApplication>
#include <QQmlApplicationEngine>

/**
 * @brief The studio is the instance running the application process
 */
class Studio
{
    Q_OBJECT
public:
    /** @brief Construct the application */
    Studio(int argc, char *argv[]);

    /** @brief Destroy the application */
    ~Studio(void) = default;

    /** @brief Run the application */
    [[nodiscard]] int run(void);

private:
    QGuiApplication _application;
    QQmlApplicationEngine _engine;
};
