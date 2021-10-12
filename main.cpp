#include "iostream"

class Human {
    int height;
    std::string surname;

    std::string get_surname() {
        return this -> surname;
    }

protected:

    void print_surname() {
        std::cout << "Human surname: " << this -> get_surname() << std::endl;
    }

    int get_height() {
        return this -> height;
    }

public:

    Human(int h, std::string s) {
    this -> height = h;
    this -> surname = s;
    }

    ~Human() {
        std::cout << "Delete object Human" << std::endl;
    }

    void set(int h) {
        this -> height = h;
    }
    void set(std::string s) {
        this -> surname = s;
    }

};

class User : public Human {
    std::string name;

    std::string get_name() {
        return this -> name;
    }

public:
    int age;

    User(std::string n, int a, int h, std::string s) : Human(h, s) {

        this -> name = n;
        this -> age = a;

    }

    void print_name() {
        std::cout << "User name: " << get_name() << std::endl;
    }

    ~User() {
        print_name();
        print_surname();
    }

    void print_height_human() {
        std::cout << "Human height: " << get_height() <<std::endl;
    }

};

int main() {

    User cj("Carl", 34, 166, "Robinson");

    cj.set(199);

    cj.set("Johnson");

    cj.print_height_human();

    return 0;
}