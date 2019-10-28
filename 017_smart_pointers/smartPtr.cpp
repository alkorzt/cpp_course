#include <iostream>
#include "scopedptr.cpp"

int main(){
  ScopedPtr<int> x(new int(10));
  std::cout << "x = " << *x << std::endl;
  *x = 5;
  std::cout << "x = " << *x << std::endl;
}
