#include "Hajo.hpp"

Hajo::Hajo(int koszlop, int ksor, char irany): koszlop(koszlop), ksor(ksor), irany(irany){}

Hajo::Hajo(){}

int Hajo::GetOszlop(){
	return koszlop;
}

void Hajo::setTalalat(){
	talalat++;
}
void Hajo::setMeret(int sorszam){
	meret = sorszam;
}

Hajo::~Hajo(){}