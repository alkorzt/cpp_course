#include <iostream>

int main(){
    unsigned char u_ch{}; // явное указание
    signed char s_ch{};
    
    wchar_t w_ch{L'A'}; // расширенный набор типов
    std::wcout << w_ch << std::endl;
    
    char16_t ch16{u'a'};
    char32_t ch32{U'B'};
  
    char ch{};
    std::cout << "Введите символ: ";
    std::cin >> ch;
        
    std::cout << "Символ : " << ch << std::endl;
    std::cout << "ASCII : " << int(ch) << std::endl;
    
    std::cout << "cout.put : ";
    std::cout.put(ch);
    std::cout << std::endl;
}
