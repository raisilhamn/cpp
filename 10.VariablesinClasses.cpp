#include <iostream>
#include <string>
using namespace std;

class VariablesinClasses
{
private: // !! Private hanya bisa diakses oleh class ini saja
    string name; 
    //* Best Practicenya adalah variable ditaruh di private lalu gunakan.
    //* konsep getter setter untuk mengambil dan menetapkan nilai. 

public:
    void setName(string x)
    {
        name = x; //* setter
    }
    string getName()
    {
        return name; //* getter
    }
};

int main(int argc, char const *argv[])
{
    VariablesinClasses contoh;
    contoh.setName("bambang");
    cout << contoh.getName() << endl;
}
