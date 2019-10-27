#include <iostream>
#include "cat.h"

Cat::Cat(){
    std::cout << "Виртуальная кошка создана" << std::endl;
}

void Cat::voice(){
    std::cout << "Мяу!" << std::endl;
}
