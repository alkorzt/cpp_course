#include <iostream>

int main(){
    int x  = 8;
    int a = x >> 1;
    int b = x << 1;

    std::cout << "x = " << x << std::endl;
    std::cout << "(x >> 1)  " << a << std::endl;
    std::cout << "(x << 1)  " << b << std::endl;
}
