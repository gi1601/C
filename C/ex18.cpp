#include <iostream>

using namespace std;

main(){
	
		setlocale(LC_ALL, "Portuguese");
		
		float l1, l2, l3, result;
		
		cout<<"Informe o primeiro lado do tri�ngulo: ";
		cin>> l1;
		
		cout<<"Informe o segundo lado do tri�ngulo: ";
		cin>> l2;
		
		cout<<"Informe o terceiro lado do tri�gulo: ";
		cin>> l3;
		
		if (l1 == l2 && l2 == l3){
			cout<< "O tri�ngulo � equilatero" <<endl;
		} else if(l1 == l2 || l1 == l3 ) 
	
}
