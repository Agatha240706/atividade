#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numero, quantidade;
	
	cout<< "Informe o n�mero para tabuada: ";
	cin>>numero;
	
	cout<<"At� que numero? ";
	cin>>quantidade;
	
	for(int x = 0; x <=quantidade; x++){
		cout << numero << " x " << x << " = " << numero * x  << endl;
	}
}
