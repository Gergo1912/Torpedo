#ifndef JATEKMANAGER_HPP
#define JATEKMANAGER_HPP

#include <string>
#include <iostream>
#include "Jatekos.hpp"
using namespace std;

class JatekManager{
	private:
		int jatekmod;

	public:
		JatekManager(int jatekmod);
		JatekManager();
		~JatekManager();
		void jatekosVsJatekos();
};

#endif