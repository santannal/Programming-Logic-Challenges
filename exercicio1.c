#include <stdio.h>

int main(){
	//variáveis
	float numero1, numero2, mediaAritmetica;
	
	//menu
	printf("----------------------------------"
	"\n---------MEDIA ARITMETICA---------"
	"\n----------------------------------\n"
	);
	//entrada de dados
	printf("\nDigite o primeiro numero: ");
	scanf("%f", &numero1);
	printf("Digite o segundo numero: ");
	scanf("%f", &numero2);
	
	//processamento
	mediaAritmetica = (numero1 + numero2) / 2;
	
	//saída de dados
	printf("\nA media aritmetica eh igual a: %.2f", mediaAritmetica);
	return 0;
}
