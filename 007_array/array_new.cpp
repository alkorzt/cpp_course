#include <iostream>

int main(){
    double *p  = new double [3];
    p[0] = 1.1;
    p[1] = 2.2;
    p[2] = 3.3;

    std::cout << p[0] + p[1] + p[2] << std::endl;
    delete [] p;
}
