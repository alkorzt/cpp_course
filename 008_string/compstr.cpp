#include <iostream>
#include <cstring>

int main(){
    char pattern[5] = "?ate";
    for(char ch {'a'}; strcmp(pattern, "mate"); ch++){
        std::cout << pattern << std::endl;
        pattern[0] = ch;
    }
    std::cout << "word = " << pattern << std::endl;
}
