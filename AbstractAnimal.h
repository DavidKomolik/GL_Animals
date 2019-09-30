#include <string>

class AbstractAnimal
{
protected:
    std::string _name;
    int _footNum;

public:
    AbstractAnimal(std::string name,int footNum);
    ~AbstractAnimal();
    virtual int getPocetNoh() = 0;
};

AbstractAnimal::AbstractAnimal(std::string name,int footNum):_name(name),_footNum(footNum)
{
}

AbstractAnimal::~AbstractAnimal()
{
}
