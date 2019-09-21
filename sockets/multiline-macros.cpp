#include<iostream>

#define MACRO(num) {\
    if (num < 10) {\
        std::cout << "number is less than 10" << std::endl;\
    }\
    else {\
        std::cout << "number is greater than 10" << std::endl;\
    }\
}

int main()
{
    MACRO(12);
    return 0;
}

