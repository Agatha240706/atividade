#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int tamanho, sabores, sabores2, adicionais, presente, entrega;
	float valorTamanho, valorTotal;
	
	cout<< "Escolha um tamanho:"<< endl;
	cout<<"1-para pequeno"<< endl;
	cout<<"2-para médio"<< endl;
	cout<<"3-para grande"<< endl;
	cout<<"R: ";
	cin>>tamanho;
	
	system("cls");
	
	cout<< "Escolha um sabor:"<< endl;
	cout<<"1-para chocolate preto\n"<< endl;
	cout<<"2-para chocolate branco\n"<< endl;
	cout<<"3-para chocolate ao leite\n"<< endl;
	cout<<"R: ";
	cin>>sabores;
	
	system("cls");
	
	cout<< "Informe se ira ter 2 sabores:"<< endl;
	cout<<"1-para chocolate branco e chocolate preto\n"<< endl;
	cout<<"2-para chocolate branco e chocolate ao leite\n"<< endl;
	cout<<"3-para chocolate preto e chocolate ao leite\n"<< endl;
	cout<<"R: ";
	cin>>sabores2;
	
	system("cls");
	
	cout<< "Escolha um adicional:"<< endl;
	cout<<"1-para KitKat\n"<< endl;
	cout<<"2-para MM'S\n"<< endl;
	cout<<"3-os dois\n";
	cout<<"4-nenhum\n";
	cout<<"R:";
	cin>>adicionais;
	
	system("cls");
	
	cout<<"Vai ser entrega?";
	cout<<"1-para sim\n";
	cout<<"2-para não\n";
	cout<<"R: ";
	cin>>entrega;
	
	system("cls");
	
	cout<<"Quer para presente?";
	cout<<"1-para sim\n";
	cout<<"2-para não\n";
	cout<<"R: ";
	cin>>presente;
		
	if(tamanho == 1){
		valorTamanho == 7.80;
	}else if(tamanho==2){
		valorTamanho == 12.90;
	}else if(tamanho==3){
		valorTamanho == 23.95;
	}
	
	valorTotal = valorTamanho;
	
	if(sabores==1){
		valorTotal == valorTotal +9.67;
	}else if(sabores==2){
		valorTotal == valorTotal +4.50;
	}else if(sabores==3){
		valorTotal == valorTotal +9.32;
	}
	
	if(sabores2==1){
		valorTotal = valorTotal +7.08;
	}else if(sabores2==2){
		valorTotal = valorTotal +9.49;
	}else if(sabores2==3){
		valorTotal = valorTotal +14.33;
	}else if(sabores2==4){
		valorTotal = valorTotal= ;
	}
	
	if(adicional==1){
		valorTotal = ValorTotal +7.08;
	}else if(sabores2==2){
		valorTotal = ValorTotal +9.49;
	}else if(sabores2==3){
		valorTotal = ValorTotal +14.33;
	}else if(sabores2==4){
		valorTotal = ValorTotal= ;
	}
	
	if (adicional==1){
        valorTotal = valorTotal + 4.67;
    }else if (adicional==2){
        valorTotal = valorTotal + 5.43;
    }else if (adicional==3){
        valorTotal = valorTotal + 10.1;
    } else if (adicional==4){
        valorTotal = valorTotal;
    }

    if (presente==1){
        valorTotal = valorTotal + 2.50;
    }else if (presente==2){
        valorTotal = valorTotal;
    }

    if (entrega==1){
        valorTotal = valorTotal + 5.00;
    } else if (entrega==2){
        valorTotal = valorTotal;
    }

    if (pagamento==1){
        valorTotal = valorTotal + 3.30;
    }else if (pagamento==2){
        valorTotal = valorTotal * 1.10;
    }

    if (quantidade==0){
        quantidade = 1;
    }


    cout << "O valor a ser pago é " <<valorTotal*quantidade;

    
}
