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
};