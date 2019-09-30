#include <iostream>
#include "Animal.h"
#include <string>


using namespace std;

Animal::Animal(string name, int pocetNoh) : AbstractAnimal( name, pocetNoh)  {
 
  cout << "Vytvaram zviera "  << _name << endl;

}

void Animal::vyhodVynimku(){
  throw logic_error("Test");
}



