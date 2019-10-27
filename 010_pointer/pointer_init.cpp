#include <iostream>

int main(){
    int x{42};
    int *p = &x;
    *p++;

    std::cout << *p << std::endl;
}
