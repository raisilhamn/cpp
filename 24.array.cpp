#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{

    //* mulai dari 0
    int rais[5] = {6, 9, 4, 2, 0};

    int rais2d[2][3] = {{2, 3, 4},
                        {1, 2, 3}};

    // * ngeprint matriks 2d
    for (int baris = 0; baris < 2; baris++)
    {
        for (int kolom = 0; kolom < 3; kolom++)
        {
            cout << rais2d[baris][kolom] << "";
        }
        cout << endl;
    }

    return 0;
}
