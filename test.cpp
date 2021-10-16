#include "iostream"

void test(int str_code) {
    switch(str_code) {
        case 211:
            std::cout << "Hello" << std::endl;
            break;
        case 225:
            std::cout << "Barev" << std::endl;
            break;
        case 231:
            std::cout << "Privet" << std::endl;
            break;
        default:
            std::cout << "Hi" << std::endl;
    }


}