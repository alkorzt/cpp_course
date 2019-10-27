#include "cat.h"
#include "dog.h"

int main(){
    Cat *cat_1 = new Cat();
    cat_1 -> voice();

    Dog dog_1;
    dog_1.voice();

    delete cat_1;
}
