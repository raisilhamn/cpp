#include <iostream>
using namespace std;

class Latihan
{
public:
    void latihan1()
    {
        cout << "mengeprint dari class" << endl;
    }
    void latihan2()
    {
        cout << "mengeprint 2" << endl;
    }
};

int main()
{
    Latihan latihanObjek;
    latihanObjek.latihan1();
    latihanObjek.latihan2();
    return 0;
}
