#include "gmock/gmock.h"
#include "AbstractAnimal.h"

class MockAnimal : public AbstractAnimal
{
private:
    /* data */
public:
    MOCK_METHOD0(int, getPocetNoh);
    MOCK_METHOD(int ,getPocetNoh,(),(override));

};
