#include <iostream>

class animal {
    int age;
    std::string name;

public:

    static void print_hello() {
        std::cout << "Hello" << "\n";
    }

    animal(int a, std::string n) {
        this -> name = n;
        this -> age = a;
    }
    ~animal(){
        std::cout << "Name: " << this -> name << "\n" << "Age: " << this -> age << "\n";
    }
};

int main() {

    animal dog(12, "Bac");

    dog.print_hello();

    return 0;
}