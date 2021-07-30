#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(int argc, char const *argv[])
{
    // * time(0) nilainya ganti setiap detik
    srand(time(0));
    for (int i = 0; i < 5; i++)
    {
        cout << rand() << endl;
    }

    return 0;
}
