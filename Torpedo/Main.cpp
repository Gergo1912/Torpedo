#include "JatekManager.hpp"
#include "Tabla.hpp"
#include "Jatekos.hpp"
#include "Hajo.hpp"
using namespace std;

int main(){	
	bool ok=false;
	int mod;
	char bekeres[2];		

	do{
		cout << "Valasszon jatekmodot!\n\n1 jatekos mod (vs gep): 1-es gomb\n2 jatekos mod (1 vs 1): 2-es gomb\nKilepes: 3-as gomb\n";
		cin >> bekeres;
		if (strlen(bekeres) == 1){
			mod = atoi(bekeres);
			JatekManager jatek(mod);
			if (mod == 1){
				
			}
			else if (mod == 2){	
				jatek.jatekosVsJatekos();
			}
			if (mod == 3){
				ok = true;
			}
		}
		else{
			cout << "Nem megfelelo menupontot valasztott.\n\n";
		}
	} while (!ok);
	return 0;
}