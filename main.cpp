#include <iostream>
#include "string"

void fnd_text(std::string str, std::string f_str) {
    int cnt = 0;
    while (std::string::npos != str.find(f_str)) {
        cnt++;
        str.replace(str.find(f_str), f_str.size(), " ");
    }
    std::cout << cnt;
}

int main() {

    std::string test = "Lorem Ipsum is simply dummy... Lorem Ipsum... Ipsum";

    std::string text = "Ipsum";

    fnd_text(test, text);


    return 0;
}