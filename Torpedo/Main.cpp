#include <iostream>
#include "Tabla.hpp"
using namespace std;

int main(){
	char nev1[10];
	Tabla tabla1(10);

	cout << "Adja meg az elso jatekos nevet:\t";
	cin >> nev1;
	system("cls");
	cout << nev1 << " sajat tablaja:\n\n";
	tabla1.kiRajzol();
	tabla1.kiRajzol();

	

	return 0;
}