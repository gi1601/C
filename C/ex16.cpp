#include <iostream>

using namespace std;

main(){
		setlocale(LC_ALL, "Portuguese");
		
		float salario, horas, result;
				
		cout<<"Informe o sal�rio m�nimo ";
		cin>>salario;
		
		cout<<"Informe quantas horas foram trabalhadas ";
		cin>>horas;
		
		result = (salario+(horas*12));
		
		cout<< "Sal�rio bruto � " << result;
		}
