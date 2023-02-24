#include <iostream>

using namespace std;

main(){
	
		setlocale(LC_ALL, "Portuguese");
		
		string nome, nome2;
		int n1, n2;
		
		cout<<"Informe o nome da pessoa 1: ";
		cin>> nome;
		
		cout<<"Informe a idade da pessoa 1: ";
		cin>> n1;
		
		cout<< "Informe o nome da pessoa 2: ";
		cin>> nome2;
		
		cout<<"Informe a idade da pessoa 2: ";
		cin>>n2;
		
		if(n1>n2){
			cout<< nome << " é mais velho";
		}	else if(n1<n2){
			cout<< nome2 << " é mais velho";
		}else if(n1=n2){
			cout<< " As duas pessoas tem a mesma idade";
		}
	
}
