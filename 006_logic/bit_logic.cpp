#include <iostream>

int main(){
  const int base {9}; // ... 0000 1001
  const int mask {5}; // ... 0000 0101
  std::cout << (base & mask) << std::endl;

  const bool base_or {true};  
  const bool mask_or {false};
  std::cout << std::boolalpha << (base_or | mask_or) << std::endl;

  const bool a {true};
  const bool b {false};
  std::cout << std::boolalpha << ((a||b)&& !(a&&b)) << std::endl;
}
