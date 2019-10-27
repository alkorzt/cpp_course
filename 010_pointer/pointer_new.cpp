#include <iostream>

int main(){
    int x{42};
    int *p = new int;

    *p = x;
    std::cout << *p << std::endl;
    delete p;
}
