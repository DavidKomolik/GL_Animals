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
    Flower(string name) : Plant(name) {};
    ~Flower(){};
    void printOut() override
     {
         std::cout << "I am Flower with name : " << _name << std::endl;
    }
};
