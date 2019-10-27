#include <iostream>

int main(){
  int s{}, t{};
  char ch{};
  std::cin.get(ch);
  while(ch != '.'){
    if(ch == ' ') s++;
    t++;    
    std::cin.get(ch);
  }
  std::cout << "t: " << t << " s: " << s << std::endl;
}
