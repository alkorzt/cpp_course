#include <iostream>

int main(){
    const int ARR_SIZE = 10;
    int arr[ARR_SIZE];

    for(int i{0}; i < 10; i++){
        arr[i] = i;
    }

    for(int i{0}; i < 10; i++){
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}
