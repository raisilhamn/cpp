#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{

    int a;
    cout << "Masukan umur" << endl;
    cin >> a;
    if (a < 60)
    {
        cout << "you are young \nGet a job" << endl;
    }
    else
    {
        cout << "you are old, stay healthy" << endl;
    }

    return 0;
}
