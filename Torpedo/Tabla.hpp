#ifndef TABLA_HPP
#define TABLA_HPP

#include <iostream>
#include <iomanip>
using namespace std;

class Tabla{
	private:
		char **tabla;
		const int meret;

	public:
		Tabla(int meret);
		~Tabla();
		void kiRajzol();
};

#endif