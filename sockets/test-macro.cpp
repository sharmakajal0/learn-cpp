#include<iostream>

#define MACRO(A) ((A) * (A))

int main()
{
    std::cout << MACRO(10) << std::endl;
    return 0;
}
