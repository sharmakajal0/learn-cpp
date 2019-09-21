#include<iostream>

void function1();
void function2();

#pragma startup function1
#pragma exit function2

void function1() {
    std::cout << "In function 1" << std::endl;
}

void function2() {
    std::cout << "In function 2" << std::endl;
}

int main(int argc, char const *argv[])
{
    function1();
    function2();

    std::cout << "Inside main" << std::endl;
    
    return 0;
}


