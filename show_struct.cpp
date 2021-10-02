#include "iostream"
#include "struct.h"

void show_struct(User *u) {
    std::cout << "User name: " << u -> name << std::endl;
    std::cout << "User firstname: " << u -> surname << std::endl;
    std::cout << "Age: " << u -> age << std::endl;
    for(int i = 0; i < 2; i++)
    {
        std::cout << "User dog name " << u -> dogs[i].name << std::endl;
        std::cout << "User dog age " << u -> dogs[i].age << std::endl;
    }
}