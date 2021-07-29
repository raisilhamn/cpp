#include <iostream>
using namespace std;

int penjumlahan(int x, int y){
    int jawaban = x + y;
    return jawaban;
}

int main(int argc, char const *argv[])
{   
    int a;
    int b;
    cin >> a;
    cin >> b;
    cout<< penjumlahan(a,b) << endl;
    return 0;
}
