#include "Tabla.hpp"

Tabla::Tabla(int meret) : meret(meret){
	tabla = new char*[meret];
	for (int i = 0; i < meret; i++){
		tabla[i] = new char[meret];
	}
	for (int i = 0; i < meret; i++){
		for (int j = 0; j < meret; j++){
			tabla[i][j] = ' ';
		}
	}	
}

void Tabla::kiRajzol(){
	int szam = 0;
	cout << " | A | B | C | D | E | F | G | H | I | J |\n";
	for (int i = 0; i < meret; i++){
		cout << "------------------------------------------\n";
		cout << szam << "| ";
		szam++;		
		for (int j = 0; j < meret; j++){			
			cout << tabla[i][j] <<" | ";
		}
		cout<<"\n";
		
	}
	cout << "------------------------------------------\n\n";
}

bool Tabla::setTabla(int oszlop, int sor, char irany, int meret){
	if (irany == 'f'){
		if ((sor + meret) > 10){
			cout << "Nem helyezheto ra a tablara ez a hajo. Probalja ujra!\n\n";
			return false;
		}
		for (int i = sor; i < sor + meret; i++){
			if (tabla[i][oszlop] != ' '){
				cout << "A megadott helyen mar talalhato objektum. Probalja ujra!\n\n";
				return false;
			}
		}
		for (int i = sor; i < sor + meret; i++){
			tabla[i][oszlop] = 'H';
		}
	}
	else if (irany == 'v'){
		if ((oszlop + meret) > 10){
			cout << "Nem helyezheto ra a tablara ez a hajo. Probalja ujra!\n\n";
			return false;
		}
		for (int i = oszlop; i < oszlop + meret; i++){
			if (tabla[sor][i] != ' '){
				cout << "A megadott helyen mar talalhato objektum. Probalja ujra!\n\n";
				return false;
			}
		}
		for (int i = oszlop; i < oszlop + meret; i++){
			tabla[sor][i] = 'H';
		}
	}
	return true;
}

Tabla::~Tabla(){
	for (int i = 0; i < meret; i++) {
		delete[] tabla[i];
	}
	delete[] tabla;
}