#include <iostream>
#include <cmath>

double dlina_okr(double radius);

int main(){
    double radius{.0};
    std::cout << "Введите радиус окружности: ";
    std::cin >> radius;

    std::cout << "Длина окружности: " << dlina_okr(radius) << std::endl; 
}

double dlina_okr(double radius){
    return M_PI * radius;
}
