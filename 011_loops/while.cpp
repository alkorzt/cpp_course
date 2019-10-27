#include <iostream>

int main(){
    const int ARR_SIZE {20};
    char name[ARR_SIZE];
    std::cout << "Введите слово: ";
    std::cin >> name;

    int i{};
    while(name[i] != '\0'){
      std::cout << name[i] << " : " << int(name[i]) << std::endl;
      i++;
    }
}
