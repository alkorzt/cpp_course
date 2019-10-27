#include <iostream>
#include "animal.h"

Animal::Animal(){
    std::cout << "Виртуальное животное создано" << std::endl;
}

Animal::~Animal(){
    std::cout << "Виртуальное животное исчезает" << std::endl;
}

void Animal::voice(){}

