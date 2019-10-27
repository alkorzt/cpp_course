#include <iostream>

double get_price(int quantity, double price = 25.1){
    const double discount {.75};
    return (quantity >= 10) ? quantity * price * discount : quantity * price;
}

int main(){
  int quantity{};
  std::cout << "Введите количество единиц товара: ";
  std::cin >> quantity;

  std::cout << "Цена с учетом скидки : " << get_price(quantity) << std::endl; 
}
