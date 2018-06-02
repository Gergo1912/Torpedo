#include "Tabla.hpp"
#include "Jatekos.hpp"
#include "Hajo.hpp"
#include <string>
using namespace std;

int main(){
	string nev;	
	bool ok=false, helyesbekeres;
	int mod, sorszam=0;

	do{
		cout << "Valasszon jatekmodot!\n\n1 jatekos mod (vs gep): 1-es gomb\n2 jatekos mod (1 vs 1): 2-es gomb\nKilepes: 3-as gomb\n";
		cin >> mod;
		if (mod == 1){

		}
		else if (mod == 2){
			system("cls");
			cout << "Adja meg az elso jatekos nevet:\t";
			cin >> nev;
			Jatekos jatekos1(nev);			
			system("cls");
			do{
				helyesbekeres = jatekos1.bekerHajo(sorszam);
				if (helyesbekeres) sorszam++;
			} while (sorszam < 5);
			system("cls");
			sorszam = 0;
			cout << "Adja meg az elso jatekos nevet:\t";
			cin >> nev;
			Jatekos jatekos2(nev);
			system("cls");
			do{
				helyesbekeres = jatekos2.bekerHajo(sorszam);
				if (helyesbekeres) sorszam++;
			} while (sorszam < 5);
			/*
			cout << jatekos1.getNev() << " sajat tablaja:\n\n";
			jatekos1.getSajatTabla();
			cout << " Ellenfel tablaja:\n\n";
			jatekos1.getEllenTabla();
			*/

			ok = true;
			
			
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