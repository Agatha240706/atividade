#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	int mes;
	
	do {
		cout<< "Informe o digito da semana: ";
	    cin>> mes;
	    
	    switch(mes){
	    	case 0: cout<< "Saindo do programa";
	    	break;
	    	case 1: cout<< "Segunda\n";
	    	break;
	    	case 2: cout<< "Terça\n";
	    	break;
	    	case 3: cout<< "Quarta\n";
	    	break;
	    	case 4: cout<< "Quinta\n";
	    	break;
	    	case 5: cout<< "Sexta\n";
	    	break;
	    	case 6: cout<< "Sabádo\n";
	    	break;
	    	case 7: cout<< "Domingo\n";
	    	break;
	    	default: cout<< "Informe um mês valido\n";
		}
	    	
	}while(mes |= 0 );
		
}
	

