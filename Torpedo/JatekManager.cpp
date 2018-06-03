#include "JatekManager.hpp"

JatekManager::JatekManager(int jatekmod) :jatekmod(jatekmod){}
JatekManager::JatekManager(){}

void JatekManager::jatekosVsJatekos(){
	bool helyesbekeres;
	string nev;
	int sorszam = 0;

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
	cout << "Adja meg a masodik jatekos nevet:\t";
	cin >> nev;
	Jatekos jatekos2(nev);
	system("cls");
	do{
		helyesbekeres = jatekos2.bekerHajo(sorszam);
		if (helyesbekeres) sorszam++;
	} while (sorszam < 5);
}

JatekManager::~JatekManager(){}