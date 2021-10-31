#include <iostream>

//
//class Animal {
//    int age;
//    std::string name;
//
//public:
//
//    static void print_hello() {
//        std::cout << "Hello" << "\n";
//    }
//
//    Animal(int a, std::string n) {
//        this -> name = n;
//        this -> age = a;
//    }
//    ~Animal(){
//        std::cout << "Name: " << this -> name << "\n" << "Age: " << this -> age << "\n";
//    }
//};

struct Human {
    std::string name;
    int age;
    int height;
};

void show_struct(Human* u) {
    std::cout << "Name: " << u -> name << std::endl;
    std::cout << "Age: " << u -> age << std::endl;
    std::cout << "Height: " << u -> height << std::endl;
}

int main() {

//    Animal dog(12, "Bac");
//
//    Animal::print_hello();

    Human user;

    user.name = "John";
    user.height = 188;
    user.age = 21;

    show_struct(&user);

    return 0;
}