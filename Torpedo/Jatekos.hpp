#ifndef JATEKOS_HPP
#define JATEKOS_HPP

#include <iostream>
#include "Tabla.hpp"

using namespace std;

class Jatekos{
	private:
		string nev;
		Tabla *tabla;

	public:
		Jatekos(string nev);		
		string getNev();
		void getTabla();

};

#endif