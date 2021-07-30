#include <iostream>
#include <cmath>

using namespace std;
void passByValue(int x);
void passByRefrence(int *x);
int main()
{
    int rais = 30;
    int bambang = 30;
    passByValue(rais);
    passByRefrence(&bambang);

    cout << "nilai rais sekarang " << rais << endl;
    cout << "nilai bambang sekarang " << bambang << endl;
}
void passByValue(int x)
{
    x = 99; // * ketika variabel dimasukkan ke passByValue nilai aslinya tidak berubah
}

void passByRefrence(int *x)
{
    *x = 66; //* akan berubah
    // * mengubah dilevel memory
}
