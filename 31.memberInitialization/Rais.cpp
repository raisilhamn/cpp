#include "Rais.hpp"
#include <iostream>

using namespace std;

Rais::Rais(int a, int b) : regularVar(a), constVar(b) // * member initializer-nya ada di sini
{
}

Rais::~Rais()
{
}

void Rais::print()
{
    cout << "Regular var-nya adalah " << regularVar << endl;
    cout << "Const var-nya adalah " << constVar << endl;
}