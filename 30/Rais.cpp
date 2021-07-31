#include "Rais.hpp"  
#include <iostream>
using namespace std;

	
Rais::Rais()
{
	cout << "konstruktor, dipanggil ketika menginisiasi objek" << endl;
}
	
Rais::~Rais()
{
	cout << "dekonstruktor, dipanggil ketika objek dihancurkan di memory" << endl;
}