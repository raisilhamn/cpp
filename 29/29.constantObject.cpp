#include <iostream>
#include "Rais.hpp"

using namespace std;

int main()
{
    const int x = 3; //* const tidak akan berubah
    cout << x << endl;
    // * constant objek tidak dapat dimasukkan ke fungsi biasa
    // !! constant objek membutuhkan constant funcition

    Rais raisObjek;
    raisObjek.printRegular();
    // return 0;

    const Rais constRaisObjt;
    constRaisObjt.printConstant();
}

