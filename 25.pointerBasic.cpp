#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int fish = 5;

    cout << &fish << endl; //* memory address variable fish

    // * pointer
    int *fishPointer;    // * point ke memory address
    fishPointer = &fish; //* fishPointer berisi memory address hexadecimal
                         // * intinya berisi memory address dari variabel yang ditunjuk
    cout << fishPointer << endl;

    return 0;
}
