#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int age;
    cout << "masukan umur"<< endl;
    cin >> age;
    switch (age)
    {
    case 16:
        cout << "bambang" << endl;
        break;
    case 20:
        cout << "bambang20"<< endl;
        break;
    default:
        cout << "nothing" << endl;
        //* default tidak perlu break
    }
    return 0;
}
