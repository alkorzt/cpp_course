#include <iostream>

const int STACK_SIZE {8};

void push(int vol);
int pop();

int stack[STACK_SIZE], *top_stack, *p;

int main(){
  int value;
  top_stack = stack;
  p = stack;

  do {
    std::cout << "Введите число: " << std::endl;
    std::cin >> value;

    if(value != 0){
        push(value);
    } else {
        std::cout << "Верхушка стека = " << pop() << std::endl;
    }
  } while (value != -1);
}

void push(int vol){
    p++;
    if(p == (top_stack + STACK_SIZE)) {
        std::cout << "Стек переполнен! " << std::endl;
        exit(1);
    }
    *p = vol;
}

int pop(){
    if(p == top_stack){
        std::cout << "Стек пуст!" << std::endl;
        exit(1);
    }
    p--;
    return *(p + 1);
}
