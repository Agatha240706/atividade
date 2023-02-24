#include <iostream>

using namespace std;

main (){
	setlocale(LC_ALL, "Portuguese");
	
	float numero;
	
	cout << "Informe um número: ";
	cin>> numero;
	
	if(numero>0){
		cout<< "O número é positivo: ";
	}else if(numero == 0){
		cout<< "O número é zero";
	}else if (numero<0){
		cout<< "O número é negativo";
	}
}
