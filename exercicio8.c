#include <stdio.h>

int main(){
	//variaveis 
	float notaTeorica, notaPratica, mediaTotal;
	
	//entrada
	printf("Digite a nota teorica: ");
	scanf("%f", &notaTeorica);
	
	printf("\nDigite a nota pratica: ");
	scanf("%f", &notaPratica);
	
	if(notaTeorica > 10 || notaTeorica < 0 || notaPratica > 10 || notaPratica < 0){
		printf("\nValor inserido invalido");
	}
	
	else{
		mediaTotal = (notaTeorica * 60 / 100) + (notaPratica * 40 / 100);
		printf("\nO media foi igual a: %.2f", mediaTotal);
	}
	return 0;
}
