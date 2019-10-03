#include <string>

using std::string;

class Plant
{
protected:
    string _name;

public:
    Plant(string name) : _name(name){};
    virtual void printOut() = 0;
    ~Plant();
};

Plant::~Plant()
{
}
