#include <stdio.h>

int main(){
	float peso, altura, imc;
	
	system("color 0A");
	printf("===========================\n");
	printf("============IMC============\n");
	printf("===========================\n");
	printf("\nDigite sua altura em metros (m): ");
	scanf("%f", &altura);
	printf("Digite o seu peso em quilogramas (kg): ");
	scanf("%f", &peso);
	
	imc = peso / (altura * altura);
	
	printf("\nSeu IMC eh igual a: %.1f / ", imc);
	
	if(imc < 18.5){
		printf("Abaixo do peso");
	} else  if(imc >= 18.5 && imc < 25){
		printf("Peso ideal");
	} else if(imc >= 25 && imc < 30){
		printf("Sobrepeso");
	} else if(imc >= 30 && imc < 35){
		printf("Obesidade grau |");
	} else if(imc >= 35 && imc < 40){
		printf("Obesidade grau ||");
	} else if(imc >= 40){
		printf("Obesidade grau |||");
	} else{
		printf("Valores invalidos");
	}
	
	return 0;
}
