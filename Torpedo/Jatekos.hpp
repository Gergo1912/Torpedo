#ifndef JATEKOS_HPP
#define JATEKOS_HPP

#include <iostream>
#include <stdlib.h>
#include <ctype.h>
#include "Tabla.hpp"
#include "Hajo.hpp"

using namespace std;

class Jatekos{
	private:
		string nev;
		Tabla *sajattabla;
		Tabla *ellentabla;
		Hajo hajok[5];

	public:
		Jatekos(string nev);	
		~Jatekos();
		string getNev();		
		void getSajatTabla();
		void getEllenTabla();
		bool bekerHajo(int sorszam);
		int oszlopAlakito(char betuoszlop);
		bool formaiEllenorzes(char betomb[]);
		bool tartalmiEllenorzes(char betuoszlop, int sor, char irany);
		void hajomeretKiiras(int sorszam);

};
#endif