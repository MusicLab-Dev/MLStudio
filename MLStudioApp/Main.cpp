/**
 * @ Author: Matthieu Moinvaziri
 * @ Description: Studio entry point
 */

#include <iostream>

#include <MLStudio/Studio.hpp>

int main(int argc, char *argv[])
{
    try {
<<<<<<< HEAD
        Studio studio(argc, argv);
=======
        Studio studio;
>>>>>>> 328d48f9059b7bb226f0fb2af1b70de79577eb5e

        return studio.run();
    } catch (const std::exception &e) {
        std::cerr << "\nAn error occured:\n\t" << e.what() << std::endl;
    }
}
