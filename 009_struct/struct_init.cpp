#include <iostream>
#include <string>

struct Person{
  std::string name;
  int age;
  double height;
};

int main(){
  Person ivan {"Ivan", 15, 1.61};
  Person vasya {"Vasil", 32, 1.85};

  std::cout << ivan.name << " ВОЗРАСТ: " << ivan.age << std::endl;
  std::cout << vasya.name << " ВОЗРАСТ: " << vasya.age << std::endl;
  std::cout << "СУММАРНЫЙ РОСТ: " << ivan.height + vasya.height << std::endl;
}
