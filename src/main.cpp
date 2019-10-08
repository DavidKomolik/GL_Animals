#pragma once 
#include <iostream>
#include <vector>
#include <iterator>
#include <list>
#include <array>
#include "Animals/Animal.h"
#include "Animals/VarAnimal.h"
#include "Plants/Plant.h"
#include "Plants/Cactus.h"
#include "Plants/Flower.h"
#include "Plants/Tree.h"
//#include "boost/sort/spreadsort/spreadsort.hpp"
#include "boost/sort/sort.hpp"
#include <ctime>

#define DATA_TYPE boost::int64_t

using namespace std;

template <typename T>
void napisCosi(T param)
{
    std::cout << "param : " << param << std::endl;
}

template <>
void napisCosi(bool a)
{
    std::cout << "Specialne pre bool : " << a << std::endl;
}

template <>
void napisCosi(Animal a)
{
    std::cout << "Specialne pre animal : " << a.getPocetNoh() << std::endl;
}

void napisCosi(Plant &plant)
{
    plant.printOut();
}

int main()
{
    
    //list<Animal> zverimex;
    vector<Animal> zverimex;
    VarAnimal<int> zver(5, 32);
    array<int,1000000> cisla;
    vector<int> ciselka;
    srand(time(NULL));

    std::cout << "Plnim pole..." << std::endl;
    clock_t begin_time = clock();

    for (size_t i = 0; i < 1000000; i++)
    {
        cisla[i] = rand();
        //ciselka.push_back(rand());
    }

    std::cout << "OK --> ";
	std::cout << float(clock() - begin_time) / CLOCKS_PER_SEC << "s \n";
    
    std::cout << "Triedim..." << std::endl;
     begin_time = clock();
    boost::sort::spreadsort::integer_sort(cisla.begin(),cisla.end());
    std::cout << "OK --> ";
    std::cout << float(clock() - begin_time) / CLOCKS_PER_SEC << "s \n";

    //napisCosi()
    napisCosi(1);
    napisCosi(1.5f);
    napisCosi('a');
    napisCosi(true);
    Animal slimak ("Slimak");
    napisCosi(slimak);

    //Pointa je ta, aby si mal specializovany template pre VSETKY rastliny.
    Flower flower("Pupava");
    Tree tree("Borovica");
    Cactus cactus("Agave");
    napisCosi(dynamic_cast<Plant &>(flower));
    napisCosi(dynamic_cast<Plant &>(tree));
    napisCosi(dynamic_cast<Plant &>(cactus));

    //zverimex.push_back(zver);

    Animal pes("Pes");
    zverimex.push_back(pes);

    zverimex.reserve(1000);

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