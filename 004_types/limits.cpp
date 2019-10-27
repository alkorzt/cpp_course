#include <iostream>
#include <climits>

int main(){
    int     m_int{INT_MAX};
    short   m_short{SHRT_MAX};
    long    m_long{LONG_MAX};
    long long m_ll{LLONG_MAX};

    std::cout << "int is " << sizeof(m_int) << " bytes" << std::endl;
    std::cout << "short is " << sizeof(m_short) << " bytes" << std::endl;
    std::cout << "long is " << sizeof(m_long) << " bytes" << std::endl;
    std::cout << "long long is " << sizeof(m_ll) << " bytes" << std::endl;
    std::cout << std::endl;    
    std::cout << "int MAX is " << m_int << std::endl;
    std::cout << "short MAX is " << m_short << std::endl;
    std::cout << "long MAX is " << m_long << std::endl;
    std::cout << "long long MAX is " << m_ll << std::endl;
}
