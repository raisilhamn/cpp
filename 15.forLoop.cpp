#include <iostream>

using namespace std;
 
int main(int argc, char const *argv[])
{
    int x ;
    cout << "berapa produk yang mau dibeli ? ";
    cin >> x;
    int harga;
    int total = 0;
    for (size_t i = 0; i < x; i++)
    {
        cout << "masukan harga : ";
        cin >> harga;
        total += harga;
    }
    cout << "total belanjaan anda adalah " << total << endl;
    
    return 0;
}
