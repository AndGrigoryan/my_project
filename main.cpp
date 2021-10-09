#include "iostream"

class Test {
    int esim = 0;

    int get_esim(){
        return this -> esim;
    }

protected:
    void print_data() {
        std::cout << "Data" << std::endl;
    }

public:
    void print_ok(int a, int b){
        if(b % 2 == 0) {
            this -> esim = b;
        }
        else {
            this -> esim = b - 1;
        }
        for( ; a <= b; a++) {
            if( a != esim ) {
                std::cout << a * a << " ";
            }

        }
    }

    void print_esim() {
        std::cout << "\nEsim = " << get_esim() << std::endl;
    }


};

class User : public Test{
    int age;
    int name;

    int get_age() {
        return this -> age;
    }

protected:
    void print_data() {
        std::cout << "Data" << std::endl;
    }

public:
    User(int a) {
        this -> age = a;
    }

    void print_age() {
        std::cout << "Age: " << get_age() << std::endl;
        print_data();
    }

    ~User() {
        std::cout << "\nobject User deleted\n" << std::endl;
    }
};

int main() {

    User user1(21);

    user1.print_ok(5, 9);

    user1.print_esim();

    return 0;
}