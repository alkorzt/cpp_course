#include <iostream>
#include <ctime>

int main(){
    double delay_time {};
    std::cout << "Введите время задержки: ";
    std::cin >> delay_time;

    clock_t delay = delay_time * CLOCKS_PER_SEC;
    clock_t begin = clock();
    while((clock()-begin) < delay);
    std::cout << "Готово!" << std::endl; 
}
