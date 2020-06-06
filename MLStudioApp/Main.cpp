/**
 * @ Author: Matthieu Moinvaziri
 * @ Description: Studio entry point
 */

#include <iostream>

#include <MLStudio/Studio.hpp>

int main(void)
{
    try {
        ML::Studio studio;

        studio.run();
        return 0;
    } catch (const std::exception &e) {
        std::cerr << "\nAn error occured:\n\t" << e.what() << std::endl;
    }
}