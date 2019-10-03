#pragma once
#include <string>
#include <iostream>

#include "Plant.h"

using std::string;

class Flower : public Plant
{
private:
    /* data */
public:
    Flower(string name);
    ~Flower();
};
