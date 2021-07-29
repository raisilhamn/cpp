#include <iostream>
#include <string>
using namespace std;

class Constructor
{
private:
    string name;

public:
    Constructor(string a) //* Constructor berparameter, bisa juga tidak berparameter.
    {
        setName(a);
    }
    void setName(string x)
    {
        name = x;
    }
    string getName()
    {
        return name;
    }
};

int main(int argc, char const *argv[])
{
    Constructor contoh("bambang");
    cout << contoh.getName() << endl;

    // * tanpa Constructor
    // VariablesinClasses contoh;
    // contoh.setName("bambang");
    // cout << contoh.getName() << endl;
}
