#pragma once
typedef unsigned int uint;

class Animal {
public:
    Animal();
    ~Animal();
    virtual void voice();
private:
    uint paws = 4;
};
