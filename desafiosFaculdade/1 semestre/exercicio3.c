#include <stdio.h>

int main(){
	//vari�veis
	float comprimentoMetros, comprimentoCentimetros;
	
	//menu
	printf("----------------------------------"
	"\n--------CONVERSAO M EM C----------"
	"\n----------------------------------\n"
	);
	
	//entrada de dados
	printf("\nDigite o comprimento em metros (m): ");
	scanf("%f", &comprimentoMetros);
	
	//processamento
	comprimentoCentimetros = comprimentoMetros * 100;
	
	//sa�da de dados
	printf("\nO comprimento %.2f metros (m) eh igual a %.2f centimetros (cm)", comprimentoMetros, comprimentoCentimetros);
	
	return 0;
}
