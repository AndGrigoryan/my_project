#include <iostream>
#include "string"

int main() {

    std::string text = "Python is an interpreted high-level general-purpose programming language. Its design philosophy emphasizes code readability with its use of significant indentation. Its language constructs as well as its object-oriented approach aim to help programmers write clear, logical code for small and large-scale projects";

    std::string test = "design";
    int i = text.find(test);

    if(std::string::npos != i) {
        std::cout << i << "  <<------>>  " << i - 1 + test.length();
    } else {
        std::cout << "ERROR: Word not found" << "\n";
    }



    return 0;
}