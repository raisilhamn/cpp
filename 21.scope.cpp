#include <iostream>

using namespace std;

int x = 20; //* semua fungsi di program ini bisa mengakses variabel x = 20

void rais(){
    cout << x <<endl;
}

int main(int argc, char const *argv[])
{
    rais();
    int x = 69; //* hanya bisa dipakai oleh main
    cout<< ::x<<endl;
    cout<< x<<endl;
    //* :: memakai yang global "unary resolution operator" 
    return 0;
}

