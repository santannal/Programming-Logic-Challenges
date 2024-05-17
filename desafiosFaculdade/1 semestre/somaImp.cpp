#include <stdio.h>
#define TAM 10

int main(){
	int i, soma = 0;
	int vetor[TAM];
	
	for(i = 0; i < TAM; ++i){
		do{
			printf("Digite o numero da pos %i: ", i);
			scanf("%d", &vetor[i]);
		}while(vetor[i] < 0);
	}
	
	for(i = 0; i < TAM; ++i){
		if(vetor[i] % 2 != 0)
			soma = soma + vetor[i];
	}
	
	printf("\nSoma dos numeros impares: %d", soma);
	return 0;
}
