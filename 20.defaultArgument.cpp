#include <iostream>

using namespace std;

// * Default argument int volume(int p=1, int l=1, int t=1);
int volume(int p=1, int l=1, int t=1);
// * Default argument hanya ditambahkan ke fungsi prototipe di atas sini

int main(int argc, char const *argv[])
{
    cout << volume(100, 2, 5) << endl;
    cout << volume(100, 5)<< endl; //* default argument
    return 0;
}

int volume(int p, int l, int t)
{
    return p * l * t;
}