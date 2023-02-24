#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int combustivel, carro, bagageiro, portas, pessoas, valorcombustivel, valortotal;
	
	cout<< "Qual é seu carro"<< endl;
	cout<<"1-para BMW"<< endl;
	cout<<"2-para AUDI"<< endl;
	cout<<"3-para FIAT"<< endl;
	cout<<"4-para FERRAEI"<< endl;
	cout<<"R: ";
	cin>>carro;
	
	system("cls");
	
	
	cout<< "Tem bagageiro? "<< endl;
	cout<< "1-para sim"<< endl;
	cout<<"2-para não"<< endl;
	cout<<"R: ";
	cin>>bagageiro;
	
	system("cls");
	
	cout<< "Tem maias de 4 portas?"<< endl;
	cout<< "1-para sim"<< endl;
	cout<<"2-para não"<< endl;
	cout<<"R: ";
	cin>>portas;
	
	system("cls");
	
	cout<< "Tem 2 pessoas a mais? "<< endl;
	cout<< "1-para sim"<< endl;
	cout<<"2-para não"<< endl;
	cout<<"R: ";
	cin>>pessoas;
	
	system("cls");
	
	cout<< "Qual o combustivel? "<< endl;
	cout<< "1-para gasolina"<< endl;
	cout<<"2-para alcool"<< endl;
	cout<<"R: ";
	cin>>combustivel;
	
	if(carro == 1 && combustivel == 1){
		valorxombustivel = 8.9;
	}else if(carro == 1 && combustivel == 2){
		valorcombustivel = 9.8;
	}else if(carro == 2 && combustivel == 1){
		valorcombustivel = 10.9;
    }else if (carro == 2 && combustivel == 2){
    	valorcombustivel = 12.8;
	}else if(carro == 3 && combustivel == 1){
		valorcombustivel = 24.9;
	}else if(carro == 3 && combustivel == 2){
		valorcombustivel = 26.8;
	}else if(carro == 4 && combustivel == 1){
		valorcombustivel = 12.9;
	}else if(carro == 4 && combustivel == 2){
		valor combustivel = 13.8;
	}
	
	valortotal = valorcombustivel;
	
	
	
}
