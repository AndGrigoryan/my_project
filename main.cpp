#include <iostream>

class Number {
        private:
            int m_number;
        public:
    
            Number(int number=0)
            : m_number(number) {

            }

            Number& operator++();
            Number& operator--();

            friend std::ostream& operator<< (std::ostream &out, const Number &n);
        };

Number& Number::operator++() {

   --m_number;

    return *this;
}

Number& Number::operator--() {
    ++m_number;

    return *this;
}

std::ostream& operator<< (std::ostream &out, const Number &n) {
    out << n.m_number;
    return out;
}

int main() {

    Number number(7);

    std::cout <<   number << std::endl;
    std::cout << ++number << std::endl;
    std::cout << ++number << std::endl;
    std::cout << --number << std::endl;
    std::cout << --number << std::endl;

    return 0;
}