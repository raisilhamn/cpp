#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{

    int age;
    int ageTotal = 0;
    int numberOfPeople = 0;

    cout << "masukkan tahun atau masukan -1 untuk keluar" << endl;
    cin >> age;

    while (age != -1)
    {
        ageTotal += age;
        numberOfPeople++;

        cout << "masukkan tahun atau masukan -1 untuk keluar" << endl;
        cin >> age;
    }

    cout << "jumlah orang yang masuk : " << numberOfPeople << endl;
    cout << "rata rata umur : " << ageTotal / numberOfPeople << endl;

    return 0;
}
