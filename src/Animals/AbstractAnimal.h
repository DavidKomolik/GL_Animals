#pragma once
#include <string>

class AbstractAnimal
{
protected:
    std::string _name;
    int _footNum;

public:
    AbstractAnimal(std::string name,int footNum):_name(name),_footNum(footNum){};
    ~AbstractAnimal(){};
    virtual int getPocetNoh() = 0;
};
