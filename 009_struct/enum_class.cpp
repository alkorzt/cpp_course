#include <iostream>

enum class Color : int {green, red, navy, black};

int main(){
    Color currentColor = Color::red;
    
    if(currentColor == Color::red) {
        std::cout << "Это красный!" << std::endl;
    }
}
