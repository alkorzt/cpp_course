#include "animal.h"

class Cat : public Animal {
public:
    Cat();
    ~Cat();
    void voice() override;
};
