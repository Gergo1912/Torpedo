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
			cout << tabla[i][j] << " | ";
		}
		cout << "\n";

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
			else if (sor == 0){
				if (tabla[i][oszlop-1] != ' ' || tabla[i][oszlop+1] != ' '){
					cout << "Nem helyezhet hajot kozvetlenul egy masik melle. Probalja ujra!\n\n";
					return false;
				}
				if (i == (meret + sor - 1)){
					if (tabla[i+1][oszlop] != ' '){
						cout << "Nem helyezhet hajot kozvetlenul egy masik melle. Probalja ujra!\n\n";
						return false;
					}
				}
			}
			else if (sor != 0){
				if (oszlop>0 && oszlop<9){
					if (tabla[i][oszlop - 1] != ' ' || tabla[i][oszlop + 1] != ' '){
						cout << "Nem helyezhet hajot kozvetlenul egy masik melle. Probalja ujra!\n\n";
						return false;
					}
				}
				else{
					if (oszlop == 0 && tabla[i][oszlop + 1] != ' '){
						cout << "Nem helyezhet hajot kozvetlenul egy masik melle. Probalja ujra!\n\n";
						return false;
					}
					else if (oszlop == 9 && tabla[i][oszlop - 1] != ' '){
						cout << "Nem helyezhet hajot kozvetlenul egy masik melle. Probalja ujra!\n\n";
						return false;
					}
				}
				if (i == (meret + sor - 1)){
					if (tabla[i+1][oszlop] != ' '){
						cout << "Nem helyezhet hajot kozvetlenul egy masik melle. Probalja ujra!\n\n";
						return false;
					}
				}
				else if (i == sor){
					if (tabla[i-1][oszlop] != ' '){
						cout << "Nem helyezhet hajot kozvetlenul egy masik melle. Probalja ujra!\n\n";
						return false;
					}
				}
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
			else if (oszlop == 0){
				if (tabla[sor - 1][i] != ' ' || tabla[sor + 1][i] != ' '){
					cout << "Nem helyezhet hajot kozvetlenul egy masik melle. Probalja ujra!\n\n";
					return false;
				}
				if (i == (meret + oszlop - 1)){
					if (tabla[sor][i + 1] != ' '){
						cout << "Nem helyezhet hajot kozvetlenul egy masik melle. Probalja ujra!\n\n";
						return false;
					}
				}	
			}
			else if (oszlop != 0){
				if (sor>0 && sor<9){
					if (tabla[sor-1][i] != ' ' || tabla[sor+1][i] != ' '){
						cout << "Nem helyezhet hajot kozvetlenul egy masik melle. Probalja ujra!\n\n";
						return false;
					}
				}
				else{
					if (sor == 0 && tabla[sor+1][i]!= ' '){
						cout << "Nem helyezhet hajot kozvetlenul egy masik melle. Probalja ujra!\n\n";
						return false;
					}
					else if (sor == 9 && tabla[sor-1][i] != ' '){
						cout << "Nem helyezhet hajot kozvetlenul egy masik melle. Probalja ujra!\n\n";
						return false;
					}				
				}				
				if (i == (meret + oszlop - 1)){
					if (tabla[sor][i + 1] != ' '){
						cout << "Nem helyezhet hajot kozvetlenul egy masik melle. Probalja ujra!\n\n";
						return false;
					}
				}
				else if (i == oszlop){
					if (tabla[sor][i - 1] != ' '){
						cout << "Nem helyezhet hajot kozvetlenul egy masik melle. Probalja ujra!\n\n";
						return false;
					}
				}
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