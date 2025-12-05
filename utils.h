#include <iostream>
#include <limits>
#include <string>

void clearScreen() {
#ifdef _WIN32 // Check if the operating system is Windows
  int i = system("cls");
#else // Assume Unix-like system otherwise
  int i = system("clear");
#endif
}

void esperar() {
  std::cout << "Presiona <ENTER> para continuar" << std::endl;
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  std::cin.get();
}
