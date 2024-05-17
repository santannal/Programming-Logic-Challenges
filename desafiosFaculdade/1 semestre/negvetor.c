#include <stdio.h>
#define TAM 12

int main(){
	int i;
	int vetor[TAM];
	
	system("color D");
	
	for(i = 0; i < TAM; ++i){
		printf("Digite o numero da pos %d: ", i);
		scanf("%d", &vetor[i]);
	}
	
	printf("\n===========ANSWERS===========\n\n");
	for(i = 0; i < TAM; ++i){
		if(vetor[i] < 0)
			printf("Vetor: %i\n", vetor[i]);
	}
	
	
	
	return 0;
}
