#include <iostream> 

int main(){
  double arg_x{1.2}, arg_y{25.6};
  std::cout.setf(std::ios_base::fixed, std::ios_base::floatfield);

  std::cout << "+ : " << arg_x + arg_y << std::endl;
  std::cout << "- : " << arg_x - arg_y << std::endl;
  std::cout << "* : " << arg_x * arg_y << std::endl;
  std::cout << "/ : " << arg_x / arg_y << std::endl;
}
