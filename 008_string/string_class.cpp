#include <iostream>
#include <string>

int main(){
  std::string name;
  std::cout << "Введите имя: ";
  std::cin >> name;

  std::cout << "Привет, " << name << "!" << std::endl;
}
