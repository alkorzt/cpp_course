#include <iostream>

int main(){
    int v_dec{42};
    int v_hex{0x42};
    int v_oct{042};

    std::cout << "dec = " << v_dec << "(dec 42)"   << std::endl;
    std::cout << "hex = " << v_hex << "(hex 0x42)" << std::endl;
    std::cout << "oct = " << v_oct << "(oct 042) " << std::endl;

    std::cout << std::endl;    

    std::cout << std::dec << "dec = " << v_dec << "(dec 42)"   << std::endl;
    std::cout << std::hex << "hex = " << v_dec << "(dec 42)"   << std::endl;
    std::cout << std::oct << "oct = " << v_dec << "(dec 42)"   << std::endl;
}
