#include "user_struct.h"
#include "show_struct.h"

void show_struct(User *u) {
    std::cout << "User age: " << u -> age << std::endl;
    std::cout << "User height: " << u -> height << std::endl;
    std::cout << "User favorite languages: ";
    for (int i = 0; i < 5; ++i) {
        std::cout << u -> favorite_languages[i] << " ";
    }
    std::cout << std::endl << "User Dog height: " << u -> bac.height << std::endl;
    std::cout << "User Dog age: " << u -> bac.age << std::endl;

}