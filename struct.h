#pragma once
#include "iostream"

struct Animal {
    std::string name;
    int age;
};

struct User {
    std::string name;
    std::string surname;
    int age;
    Animal dogs[2];
};