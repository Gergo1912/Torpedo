#include "Jatekos.hpp"

Jatekos::Jatekos(string nev) :nev(nev){
	tabla = new Tabla(10);
}
string Jatekos::getNev(){
	return nev;
}
void Jatekos::getTabla(){
	tabla->kiRajzol();
}