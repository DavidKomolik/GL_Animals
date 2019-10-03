#include "Flower.h"


Flower::Flower(string name) : Plant(name)
{
    std::cout << "Creating flower" << name << std::endl;
}

Flower::~Flower()
{
}
