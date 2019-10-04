#pragma once
#include "../Imports.h"

#include "Plant.h"

class Tree : public Plant
{
private:
    /* data */
public:
    Tree(string name) : Plant(name){};
    ~Tree(){};
     void printOut() override
     {
         std::cout << "I am Tree with name : " << _name << std::endl;
    }
};
