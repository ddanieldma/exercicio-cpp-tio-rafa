#include <iostream>

int main(){
	std::cout<<"Digite o ano: ";
	int ano;
	std::cin>>ano;

	if((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0){
		std::cout<<"eh bissexto";
	}
	else{
		std::cout<<"nao eh bissexto";
	}

	return 0;
}