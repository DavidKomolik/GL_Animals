#pragma once
#include <string>
#include <iostream>
#include "AbstractAnimal.h"

using namespace std;

template<typename T> 
void napisCosi(T param){
    std::cout << "param : " << param << std::endl;
}

class Animal : public AbstractAnimal{
    private:

    public:
        Animal(string name = "empty", int pocetNoh = -1);

        virtual ~Animal(){};

        int getPocetNoh() override {
            return _footNum;
        }
        string getName(){
            return _name;
        }

        void vyhodVynimku();

        Animal(const Animal& a) : AbstractAnimal( a._name, a._footNum){

            cout<< "Kopirujem zviera " << _name << endl;

        }
        Animal(const Animal&& a): AbstractAnimal( a._name, a._footNum) {

            cout<< "Presuvam zviera " << _name << endl;
        }

};