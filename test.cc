#include <iostream>
#include <vector>
#include <iterator>
#include "Animal.h"
#include <list>
#include <array>
#include "src/VarAnimal.h"

using namespace std;

int main()
{
    //list<Animal> zverimex;
    vector<Animal> zverimex;
    VarAnimal<int> zver(5, 32);
    napisCosi(555);
    napisCosi(true);
    napisCosi('c');

    Animal slimak("Slimak");
    napisCosi(slimak);
    //zverimex.push_back(zver);

    Animal pes("Pes");
    zverimex.push_back(pes);

    //zverimex->operator[](0) = *new Animal ("Macka");
    cout << "------------------" << endl;

    zverimex.emplace_back("Kocur");
    cout << "------------------" << endl;

    zverimex.emplace_back("Lev");
    cout << "------------------" << endl;

    zverimex.emplace_back("Tiger");
    cout << "------------------ kap :" << zverimex.capacity() << endl;

    //zverimex.resize(50);
    zverimex.emplace_back("Macka");

    cout << "------------------ kap :" << zverimex.capacity() << endl;

    zverimex.emplace_back("Pes");
    cout << "------------------kap :" << zverimex.capacity() << endl;

    zverimex.emplace_back("Kocur");
    cout << "------------------kap :" << zverimex.capacity() << endl;

    zverimex.emplace_back("Lev");
    cout << "------------------kap :" << zverimex.capacity() << endl;

    zverimex.emplace_back("Tiger");
    cout << "------------------" << endl;

    zverimex.emplace_back("Mucha");
    cout << "------------------" << endl;

    zverimex.emplace_back("Ryba");
    cout << "------------------kap :" << zverimex.capacity() << endl;

    zverimex.emplace_back("Dikobraz");
    cout << "------------------" << endl;

    zverimex.emplace_back("Agama");
    cout << "------------------kap :" << zverimex.capacity() << endl;

    //Pridat aspon 10 zvierat
    //List, Vector, Array,
    //
    return 0;
}

/* string  gen_randoms( const int len) {
    string  s ="";
    static const string alphanum[] =
        "0123456789"
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz";

    for (int i = 0; i < len; ++i) {
        s[i] = alphanum[rand() % (sizeof(alphanum) - 1)];
    }

    s[len] = 0;
    return s;
} */