#include<iostream>

int main(){
	std::cout<<"Digite a massa (kg): ";
	float massa;
	std::cin>>massa;
	std::cout<<"Digite a altura (cm): ";
	float altura;
	std::cin>>altura;
	altura /= 100;

	float imc = massa / (altura * altura);

	if(imc < 17){
		std::cout<<"Muito abaixo do peso";
	}
	else if(imc >= 17 && imc < 18.5){
		std::cout<<"Abaixo do peso";
	}
	else if(imc >= 18.5 && imc < 25){
		std::cout<<"Peso normal";
	}
	else if(imc >= 25 && imc < 30){
		std::cout<<"Acima do peso";
	}
	else if(imc >= 30 && imc < 35){
		std::cout<<"Obesidade";
	}
	else if(imc >= 35 && imc < 40){
		std::cout<<"Obesidade severa";
	}
	else {
		std::cout<<"Obesidade mórbida";
	}

	return 0;
}