#include <stdio.h>

int main(){
	
	//vari�veis
	float temperaturaFahrenheit, temperaturaCelsius;
	
	//menu
	printf("----------------------------------"
	"\n------CONVERSAO TEMPERATURA-------"
	"\n----------------------------------\n"
	);
	
	//entrada de dds
	printf("\nDigite a temperatura em Fahrenheits(F): ");
	scanf("%f", &temperaturaFahrenheit);
	
	//processamento
	temperaturaCelsius = (temperaturaFahrenheit - 32) / 1.8;
	
	//sa�da de dds
	printf("\nA temperatura %.1f em Fahrenheits(F) eh igual a %.1f graus Celsius", temperaturaFahrenheit, temperaturaCelsius);
	
	
	return 0;
}
