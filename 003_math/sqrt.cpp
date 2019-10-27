#include <iostream>
#include <cmath>

int main(){
  int area{};
  std::cout << "Введите площадь квадрата: ";
  std::cin >> area;

  std::cout << "Сторона квадрата: " << sqrt(area) << std::endl;
}
