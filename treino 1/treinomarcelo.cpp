#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numero, quantidade;
	
	cout<< "Informe o número para tabuada: ";
	cin>>numero;
	
	cout<<"Até que numero? ";
	cin>>quantidade;
	
	for(int x = 0; x <=quantidade; x++){
		cout << numero << " x " << x << " = " << numero * x  << endl;
	}
}
