#include <iostream>

using namespace std;

void imprimeMensagem(){
	cout << "Olá mundo!";
}

float somar(float a, float b){
	return a + b;
}

main(){
	setlocale(LC_ALL, "Portuguese");
	imprimeMensagem();
	
	float numero, numero2;
	
	cout << "Informe o primeiro número: ";
	cin>> numero;
	
	cout << "Informe o segundo número: ";
	cin >>numero2;
	
	cout << somar(numero, numero2);
	
}
