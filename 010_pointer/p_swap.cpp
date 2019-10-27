#include <iostream>

void v_swap(int a, int b){
    int tmp = a;
    a = b;
    b = tmp;
}

void p_swap(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}


int main(){
    int a{1}, b{42};
    v_swap(a,b);
    std::cout << "v_swap(1,42) a:" << a << " b: " << b << std::endl;
    p_swap(&a, &b);
    std::cout << "p_swap(1,42) a:" << a << " b: " << b << std::endl;
}
