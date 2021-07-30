#include <iostream>
using namespace std;

int faktorial(int x)
{

    if (x > 1)
    {
        return x * faktorial(x - 1);
    }
    else
    {
        return 1;
    }
}

int main(int argc, char const *argv[])
{

    int a;
    cout << "masukkan angka yang ingin dihitung" << endl;
    cin >> a;
    cout << faktorial(a) << endl;
    return 0;
}
