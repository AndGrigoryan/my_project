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
    ~Animal(){                                                                              //destructor
        std::cout << "Name: " << this -> name << "\n" << "Age: " << this -> age << "\n";
    }
};

class User : public Animal{
    std::string surname;

protected:
    void esim() {
        std::cout << "Protected method" << "\n";
    }

public:
    User(std::string s, std::string n, int a) : Animal(a, n) {
        this -> surname = s;
    }
    ~User() {
        std::cout << "Surname: " << this -> surname << "\n";
        esim();
    }
};

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

    User carl("Johnson", "Bac", 12);

    Animal::print_hello();

//    Human user;
//    user.name = "John";
//    user.height = 188;
//    user.age = 21;
//
//    show_struct(&user);

    return 0;
}