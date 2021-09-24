#include <iostream>

class Animals {
    public:
        int age;
        std::string type, place;

        void voice(std::string u) {
            std::cout << u;
        }
        void show_class() {
            std::cout << "Age "   << age << std::endl;
            std::cout << "Type "  << type << std::endl;
            std::cout << "Place " << place << std::endl;
        }

};

int main() {

    Animals bac, piso;

    bac.age = 3;
    bac.type = "Dog";
    bac.place = "Europe";

    bac.show_class();

    piso.age = 1;
    piso.type = "Cat";
    piso.place = "Asia";

    piso.show_class();

    return 0;
}