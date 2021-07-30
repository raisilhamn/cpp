#include <iostream>
using namespace std;

void printNumber(int x)
{
    cout << "print integer :" << x << endl;
}

void printNumber(float x)
{
    cout << "print float :" << x << endl;
}

int main(int argc, char const *argv[])
{
    int a = 54;
    float b = 420.69;
    printNumber(a);
    printNumber(b);
    return 0;
}
