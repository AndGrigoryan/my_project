#include <iostream>

class Animal {
    int age;
    std::string name;

public:

    static void print_hello() {
        std::cout << "Hello" << "\n";
    }

    Animal(int a, std::string n) {
        this -> name = n;
        this -> age = a;
    }
    ~Animal(){
        std::cout << "Name: " << this -> name << "\n" << "Age: " << this -> age << "\n";
    }
};

int main() {

    Animal dog(12, "Bac");

    Animal::print_hello();

    return 0;
}