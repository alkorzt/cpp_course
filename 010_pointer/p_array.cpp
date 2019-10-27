#include <iostream>

int main(){
  const int ARR_SIZE {10};
  int *block = new int[ARR_SIZE];
  int *p_array = block;

  for(int i{}; i < ARR_SIZE; i++){
      *(p_array + i) = i;
  }

  for(int i{}; i < ARR_SIZE; i++) {
      std::cout << *(p_array + i) << " ";
  }

  std::cout << std::endl;
}
