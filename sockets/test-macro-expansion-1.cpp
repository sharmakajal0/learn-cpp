#include<iostream>

#define MACRO(A) ((A) * (A) * (A))

int main() {
    int a = 10, b = 436;
    int c = a + b;
    int d = MACRO(c);
    std::cout << MACRO(a + b) << std::endl;
    std::cout << d << std::endl;

    return 0;
}