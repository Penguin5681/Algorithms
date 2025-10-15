#include <iostream>

int main() {
    int X = 20;
    int *ptr = &X;
    /* 
    std::cout << &X << '\n';
    std::cout << ptr << '\n';
    std::cout << *ptr << '\n';
    std::cout << *&X << '\n'; */

    ptr++;
    std::cout << ptr << '\n';
}