#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    double rais[10];
    cout << sizeof(rais) << endl;

    cout << sizeof(rais) / sizeof(rais[0]) << endl; // * trik mencari panjang array

    return 0;
}
