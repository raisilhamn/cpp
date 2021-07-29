#include <iostream>
using namespace std;

// !! Komputer membaca dari atas, maka fungsi harus dipanggil dulu
void printBos()
{
    cout << "print dari fungsi" << endl;
}

int main(int argc, char const *argv[])
{
    // !! tipe void jika fungsi tidak mereturn apa saja
    //  contohnya adalah mengeprint sesuatu
    printBos();
    return 0;
}
