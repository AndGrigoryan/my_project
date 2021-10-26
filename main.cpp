#include <iostream>
#include "string"

std::string solver (std::string text) {
    if (text.size() <= 2) {
        return "No";
    }
    int cnt = 0;
    char t = 0;
    for (int i = 0; i <= text.size() / 2; i++) {
        if ( text[i] != text[text.size() - i - 1]) {
            return "No";
        }
        if (text[i] != t) {
            cnt++;
            t = text[i];
        }
        if ( cnt > 2) {
            return "No";
        }
    }
    if (cnt <= 1) {
        return "No!";
    }
    return "Yes";
}

int main() {

    std::string text;

    std::cin >> text;

    std::cout << solver(text) << std::endl;

    return 0;
}