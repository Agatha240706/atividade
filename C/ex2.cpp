#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float n1,n2;
	
	cout<< "Digite um número: ";
	cin>> n1;
	
	cout<< "Digite outro número: ";
	cin>> n2;
	
	if (n1>n2){
		cout << " n1 é maior que n2 ";
	} 
	
	if(n1<n2){
		cout << "n2 é maior que n1";
	}
	
	if (n1==n2){
		cout << "os dois são iguais";
	}
	
}
