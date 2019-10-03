#include "Animal.h"


using namespace std;



Animal::Animal(string name, int pocetNoh) : AbstractAnimal( name, pocetNoh)  {
 
  cout << "Vytvaram zvieras "  << _name << endl;

}

void Animal::vyhodVynimku(){
  throw logic_error("Test");
}


