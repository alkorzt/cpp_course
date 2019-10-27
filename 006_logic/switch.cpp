#include <iostream>

int main(){
    int number{};
    std::cout << "Linux (1) или Windows(2)? ";
    std::cin >> number;

    switch (number){
        case 1: {
                    std::cout << "Linux!" << std::endl;
                    break;
                }
        case 2: {
                    std::cout << "Windows..." << std::endl;
                    break;
                }
        default:{
                    std::cout << "Что-то еще..." << std::endl;
                    break;
                }
    }
}
