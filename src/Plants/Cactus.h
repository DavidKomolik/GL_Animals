#pragma once
#include <string>
#include <iostream>

#include "Plant.h"

using namespace std;

class Cactus : public Plant {
    public :
    Cactus(string name) : Plant(name){
        std::cout << "Creating tree" << name << std::endl;
    }
    ~Cactus();
    void printOut() override
     {
         std::cout << "I am Cactus with name : " << _name << std::endl;
    }
};