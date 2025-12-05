#ifndef UTILS_H
#define UTILS_H
#include <iostream>
#include <string>
#include <limits>

void clearScreen() {
#ifdef _WIN32  // Check if the operating system is Windows
    system("cls");
#else  // Assume Unix-like system otherwise
    system("clear");
#endif
}

void esperar() {
    std::cout << "Presiona <ENTER> para continuar" << std::endl;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();
}

#endif
