#include <iostream>

template <typename T>
T sum(T a, T b) {
    return a + b;
};

int main(){
  int a{1}, b{42};
  std::cout << "1+42=" << sum<int>(a,b) << std::endl;
}
