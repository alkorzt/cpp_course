#include <iostream>

namespace mylib {
  int max(int a, int b){return (a > b)? a : b;}
}

int main(){
    int a{1}, b{42};
    std::cout << "MAX(1,42) = " << mylib::max(a,b) << std::endl;
}
