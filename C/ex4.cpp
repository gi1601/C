#include <iostream>

using namespace std;

main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int num, i = 1;
	cout<< "Digite um número inteiro positivo";
	cin>> num;
	cout<<"Numero impares menores ou iguais a "<< num << " : ";
	do{
		if(i % 2 !=0){
			cout << i <<" ";
		}
		i++;
	}while (i <=num);
}
