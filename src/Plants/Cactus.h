#pragma once
#include "../Imports.h"

#include "Plant.h"


class Cactus : public Plant {
    public :
    Cactus(string name) : Plant(name){
        std::cout << "Creating tree" << name << std::endl;
    }
    ~Cactus(){};
    void printOut() override
     {
         std::cout << "I am Cactus with name : " << _name << std::endl;
    }
};