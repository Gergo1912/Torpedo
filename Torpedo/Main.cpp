#include <iostream>
#include "Tabla.hpp"
#include "Jatekos.hpp"
#include <string>
using namespace std;

int main(){	

	string nev;	
	bool ok=false;
	int mod;

	do{
		cout << "Valasszon jatekmodot!\n\n1 jatekos mod (vs gep): 1\n2 jatekos mod (1 vs 1): 2\nKilepes: 3\n";
		cin >> mod;
		if (mod == 1){

		}
		else if (mod == 2){
			system("cls");
			cout << "Adja meg az elso jatekos nevet:\t";
			cin >> nev;
			Jatekos jatekos1(nev);
			system("cls");
			cout << jatekos1.getNev() << " sajat tablaja:\n\n";
			jatekos1.getTabla();
			
		}
		else if(mod == 3){
			ok = true;
		}
		else{
			cout << "Csak 1 es 3 kozotti szam adhato meg.\n";
		}

	} while (!ok);
	
	
	

	return 0;
}