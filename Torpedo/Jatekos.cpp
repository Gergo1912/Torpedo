#include "Jatekos.hpp"

Jatekos::Jatekos(string nev) :nev(nev){
	sajattabla = new Tabla(10);
	sajattabla = new Tabla(10);
}
string Jatekos::getNev(){
	return nev;
}
void Jatekos::getSajatTabla(){
	sajattabla->kiRajzol();
}
void Jatekos::getEllenTabla(){
	sajattabla->kiRajzol();
}
bool Jatekos::bekerHajo(int sorszam){	
	int oszlop, sor, meret;
	char irany, betuoszlop;
	char betomb[7];
	hajomeretKiiras(sorszam);
	cout << "Tegye fel a hajot a tablara. Adja meg a hajo kezdo poziciojat valamint az iranyat(v:vizszintes, f:fuggoleges). Egy pelda: A0v\n";
	//cout << "Tegye fel a hajot a tablara. Meg kell adnia a hajo kezdo poziciojat, iranyat, vagyis milyen iranyban kerul fel a tablara (v:vizszintes, f:fuggoleges)Pelda: A0v)\n";
	cin >> betomb;
	if (formaiEllenorzes(betomb)){
		betuoszlop = betomb[0];
		sor = betomb[1] - '0';
		irany = betomb[2];
		if (tartalmiEllenorzes(betuoszlop, sor, irany)){
			oszlop = oszlopAlakito(betuoszlop);
			hajok[sorszam] = Hajo(oszlop, sor, irany);
			hajok[sorszam].setMeret(sorszam+1);
			if (!sajattabla->setTabla(oszlop, sor, irany, hajok[sorszam].GetMeret())){
				return false;
			}
			sajattabla->kiRajzol();
			return true;
		}
		return false;
	}
	return false;
}

void Jatekos::hajomeretKiiras(int sorszam){
	if (sorszam == 0){
		cout << "1 egyseg meretu hajo. ";
	}	
	else if(sorszam == 1){
		cout << "2 egyseg meretu hajo. ";
	}
	else if (sorszam == 2){
		cout << "3 egyseg meretu hajo. ";
	}
	else if (sorszam == 3){
		cout << "4 egyseg meretu hajo. ";
	}
	else if (sorszam == 4){
		cout << "5 egyseg meretu hajo. ";
	}
}

bool Jatekos::formaiEllenorzes(char betomb[]){
	if (strlen(betomb) != 3 || !isalpha(betomb[0]) || !isdigit(betomb[1]) || !isalpha(betomb[2])){
		cout << "Nem megfelelo formatum\n\n";
		return false;
	}
	return true;
}

bool Jatekos::tartalmiEllenorzes(char betuoszlop, int sor, char irany){
	if (!isalpha(betuoszlop) || betuoszlop != 'A' && betuoszlop != 'B' && betuoszlop != 'C' && betuoszlop != 'D' && betuoszlop != 'E' && betuoszlop != 'F' && betuoszlop != 'G' && betuoszlop != 'H'
		&& betuoszlop != 'I' && betuoszlop != 'J'){
		printf("Az elso karakter nem megfelelo! Adja meg ujra!\n\n");
		return false;
	}
	else if (sor > 9 || sor < 0){
		printf("A masodik karakter nem megfelelo! Adja meg ujra!\n\n");
		return false;
	}
	else if (irany != 'v' && irany != 'f'){
		printf("A harmadik karakter nem megfelelo! Adja meg ujra!\n\n");
		return false;
	}	
	return true;
	
}

int Jatekos::oszlopAlakito(char betuoszlop){
	if (betuoszlop == 'A') return 0;
	else if (betuoszlop == 'B')	return 1;
	else if (betuoszlop == 'C') return 2;
	else if (betuoszlop == 'D') return 3;
	else if (betuoszlop == 'E') return 4;
	else if (betuoszlop == 'F') return 5;
	else if (betuoszlop == 'G') return 6;
	else if (betuoszlop == 'H') return 7;
	else if (betuoszlop == 'I') return 8;
	else if (betuoszlop == 'J') return 9;
}

Jatekos::~Jatekos(){}