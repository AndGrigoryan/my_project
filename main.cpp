#include "iostream"
#include "vector"

class House  {
    public: char address[35] = "... ...";
    int number_of_windows = 12;
    int number_of_doors = 2;
    std::string door1 = "Closed";
    std::string door2 = "Closed";
    std::string security = "Off";

    std::string open_close_door()  {
        std::string door;
        std::cin >> door;
        if (door == "open") {
            door = "Opened";
        }
        else {
             door = "closed";
        }
        return door;
    }

    std::string on_off_security() {
        std::string security;
        std::cin >> security;
        return security;
    }

    void print_class_home() {
        std::cout << "Address: " << address << std::endl;
        std::cout << "Number of windows " << number_of_windows << std::endl;
        std::cout << "Number or doors " << number_of_doors << std::endl;
        std::cout << "Door 1: " << door1 << std::endl;
        std::cout << "Door 2: " << door2 << std::endl;
        std::cout << "Security(off/on) " << security << std::endl;
    }

};

int main() {

    House test;

    std::cout << "Door1 " << test.door1 << std::endl;
    test.door1 = test.open_close_door();
    std::cout << "Door1 " << test.door1 << std::endl;

    std::cout << "Door2 " << test.door2 << std::endl;
    test.door2 = test.open_close_door();
    std::cout << "Door2 " << test.door1 << std::endl;

    std::cout << "Security: " << test.security << std::endl;
    test.security = test.on_off_security();
    std::cout << "Security: " << test.security << std::endl;

    test.print_class_home();


    return 0;
}