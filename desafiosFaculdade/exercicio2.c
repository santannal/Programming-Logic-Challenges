#include <stdio.h>

int main(){
	//variáveis
	float base, altura, areaTriangulo;
	
	//menu
	printf("----------------------------------"
	"\n----------AREA TRIANGULO----------"
	"\n----------------------------------\n"
	);
	
	//entrada de dados
	printf("\nDigite o tamanho da base (b): ");
	scanf("%f", &base);

	printf("\nDigite o tamanho da altura (h): ");
	scanf("%f", &altura);
	
	//processamento
	areaTriangulo = base * altura / 2;
	
	//saída de dados
	printf("\nA area do triangulo eh igual a: %.2f", areaTriangulo);
	return 0;
}
