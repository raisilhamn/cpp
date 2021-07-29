#include <iostream>
using namespace std;
void printBos(); // kalau seperti ini maka C++ akan mencari fungsi terlebih dahulu sebelum menjalankan main
void printBos2(int bambang);
int main(int argc, char const *argv[])
{
    // !! tipe void jika fungsi tidak mereturn apa saja
    //  contohnya adalah mengeprint sesuatu
    printBos();
    printBos2(4);
    return 0;
}

void printBos()
{
    cout << "print dari fungsi" << endl;
}

void printBos2(int bambang){
    cout << "bambang adalah gembus " << bambang << endl;
}
