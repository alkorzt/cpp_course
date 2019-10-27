#include <iostream>

void simon(int count);

int main(){
  int count{};
  std::cout << "Введите целое число : ";
  std::cin >> count;

  simon(count);
}

void simon(int count){
    std::cout << "Саймон говорит СЪЕШЬ " << count << " БУЛОЧЕК ДА ВЫПЕЙ ЧАЮ!" << std::endl;
}
