#include <iostream>
#include "Rais.hpp"

using namespace std;
Rais::Rais()
{
}

void Rais::printRegular()
{
    cout << "print dari fungsi biasa" << endl;
}

void Rais::printConstant() const {
    cout << "print dari fungsi constant" << endl; //* contoh dari constant function
}


