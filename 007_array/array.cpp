#include <iostream>
#include <array>

int main(){
    std::array<int,4> a4 = {5,6,4,8};
    for(int x: a4){
        std::cout << x << " ";
    }

    std::cout << std::endl;
}
