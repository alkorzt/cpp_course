#include <iostream>
#include "dog.h"

Dog::Dog(){
    std::cout << "Виртуальная собака создана" << std::endl;
}

Dog::~Dog(){
    std::cout << "Виртуальная собака исчезает" << std::endl;
}

void Dog::voice(){
  std::cout << "Гав!" << std::endl;
}
