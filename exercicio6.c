#include <stdio.h>

int main(){
	
	//variaveis 
	float raio, areaCircunferencia;
	#define PI 3.14
	
	//menu
	printf("----------------------------------"
	"\n--------AREA CIRCUNFERENCIA-------"
	"\n----------------------------------\n"
	);
	
	//entrada
	printf("\nDigite o valor do raio (r): ");
	scanf("%f", &raio);
	
	//processamento
	areaCircunferencia = 2 * PI * raio;
	
	//saída
	printf("\nA area da circunferencia de raio %.2f cm eh igual a %.2f cm ", raio, areaCircunferencia);
	return 0;
}
