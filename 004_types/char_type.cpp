#include <iostream>

int main(){
    char ch{};
    std::cout << "Введите символ: ";
    std::cin >> ch;

    std::cout << "Символ : " << ch << std::endl;
    std::cout << "ASCII : " << int(ch) << std::endl;
}
