#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int rais[5];
    int *rs0 = &rais[0];
    int *rs1 = &rais[1];
    int *rs2 = &rais[2];
    cout << "rs0 ada di "<< rs0 << endl;
    cout << "rs1 ada di "<< rs1 << endl;
    cout << "rs2 ada di "<< rs2 << endl;
    
    rs0 += 2;
    cout << "rs0 sekarang ada di " << rs0 << endl;

    rs0 -= 1;
    cout << "rs0 sekarang ada di "<< rs0 << endl;

    // * intinya di pointer array, yang berubah adalah penunjuknya,
    // * misalnya pointer menunjukkan memory index ke 0, ketika ditambah 2 
    // * maka pointer akan menunjuk ke memory index ke 2

    return 0;
}
