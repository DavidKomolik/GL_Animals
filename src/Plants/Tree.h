#pragma once
#include <string>
#include <iostream>

#include "Plant.h"

using namespace std;

class Tree : public Plant
{
private:
    /* data */
public:
    Tree(std::string name) : Plant(name){};
    ~Tree(){};
     void printOut() override
     {
         std::cout << "I am Tree with name : " << _name << std::endl;
    }
};
