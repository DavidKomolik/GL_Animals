#pragma once
#include <string>

using std::string;

class Plant
{
protected:
    string _name;

public:
    Plant(string name) : _name(name){};
    virtual void printOut() = 0;
    virtual string getName(){return _name;};
    ~Plant();
};

Plant::~Plant()
{
}
