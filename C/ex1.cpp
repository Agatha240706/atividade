#include <iostream>


using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float nascimento,resultado;
	const int hoje = 2023;
	
	cout<< "Informe seu nascimento:";
	cin>> nascimento;
	
	resultado = (hoje-nascimento);
	
	if (resultado >=16){
		cout << "Você pode acessae o site, pois você tem: " <<resultado<< "anos";
	}else{
		cout << "Você não pode votar";
	}
}
