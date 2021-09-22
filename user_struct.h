#pragma once
#include "iostream"

struct Dog {
    int age, height;
};

struct User {
    int age, height;
    std::string favorite_languages[5] = {"PHP", "C++", "C#", "JS", "GO"};
    Dog bac;
};


