#include "iostream"

const int length = 5;

struct Dog{
    char eye_color[6];
    int height;
    int age = 2;
};

struct Computer {
    char system[15] = "Windows 10";
    int cpu_core_count;
    int ram;
};

struct User {
    int age ;
    char name[20] = "User";
    Dog lynda;
    Computer laptop;

};

struct House {

    int length = 10;
    int width;
    User u[];

};

void print_data(User u) {

    std::cout << std::endl << "User age: " << u.age;
    std::cout << std::endl << "User name: " << u.name;

    std::cout << std::endl << "User dog height: " << u.lynda.height;
    std::cout << std::endl << "User dog eye color: " << u.lynda.eye_color;

    std::cout << std::endl << "User laptop system: " << u.laptop.system;
    std::cout << std::endl << "User RAM: " << u.laptop.ram;
    std::cout << std::endl << "User laptop cpu: " << u.laptop.cpu_core_count;
}

int main() {

    User test;

    test.age = 21;

    test.lynda.height = 2;

    std::cin >> test.lynda.eye_color;

    test.laptop.cpu_core_count = 9;
    test.laptop.ram = 16;

    House user1_tun;



    print_data(test);

    user1_tun.u[0].laptop.ram = 21;
    user1_tun.u[1].laptop.ram = 42;

    std::cout << std::endl << "User1 laptop ram: " << user1_tun.u[0].laptop.ram;
    std::cout << std::endl << "User1 laptop ram: " << user1_tun.u[1].laptop.ram;

    return 0;
}