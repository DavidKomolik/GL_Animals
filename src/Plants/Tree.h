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
    Tree(std::string name);
    ~Tree();
};
