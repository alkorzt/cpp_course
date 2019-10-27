#include <iostream>

int max(int a, int b) {return (a > b)? a : b ;}

int main(){
  int a{}, b{};
  std::cin >> a >> b;

  std::cout << "max = " << max(a,b) << std::endl;
}
