#include <iostream>
#include "cat.h"

Cat::Cat(){
    std::cout << "Виртуальная кошка создана" << std::endl;
}

Cat::~Cat(){
    std::cout << "Виртуальная кошка исчезает" << std::endl;
}

void Cat::voice() {
    std::cout << "Мяу!" << std::endl;
}
