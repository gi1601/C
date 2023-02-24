#include <iostream>

using namespace std;

main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	string senha, login;
	
	cout<<"Informe o seu login: ";
	cin>>login;
	
	cout<<"Informe sua senha: ";
	cin>>senha;
	
	if(login == senha ){
		cout<<"Pode entrar";
	}else{
		cout<<"Login e senha incorretos";
	}
}
