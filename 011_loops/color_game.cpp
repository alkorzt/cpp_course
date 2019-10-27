#include <iostream>
#include <string>

int main(){
  std::string ans = "Отгадайте цвет (англ.) c 3х попыток ";
  const int MAX_COUNT {3};
  const std::string color {"red"};

  int current_attempt {0};
  while(current_attempt < MAX_COUNT) {
    current_attempt++;
    std::cout << ans <<" #" << current_attempt << std::endl;
    
    std::string x{};
    std::cin >> x;

    if (x == ""){
        break;
    } if (x != color) {
        ans = "Мимо!";
        continue;
    }

    std::cout << "В точку! С " << current_attempt << " попытки." << std::endl;
    break;  
  }
}
