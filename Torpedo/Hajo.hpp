#ifndef HAJO_HPP
#define HAJO_HPP

#include <iostream>
using namespace std;

class Hajo{
	private:		
		int koszlop;
		int ksor;		
		char irany;		
		int talalat=0;
		int meret;

	public:
		Hajo(int koszlop, int ksor, char irany);
		Hajo();
		~Hajo();
		int GetOszlop();
		void setTalalat();
		void setMeret(int meret);
};

#endif