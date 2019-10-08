#pragma once
#include "AbstractAnimal.h"
#include <iostream>


template <typename T>
class VarAnimal : public AbstractAnimal
{
private:
    /* data */
public:

    VarAnimal(T age, T footCount) :  AbstractAnimal("noname",footCount){
        std::cout << "Vek : " << age << std::endl;
    };
    int getPocetNoh() override {
        return _footNum;
    }

    ~VarAnimal(){};
};

