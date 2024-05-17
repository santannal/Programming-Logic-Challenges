#include <stdio.h>

int main(){
	int i;
	int vetor[5];
	
	for(i = 0; i < 5; ++i){
		printf("Digite o numero da pos %d: ", i);
		scanf("%d", &vetor[i]);
	}
	
	printf("\n===========ANSWERS===========\n");
	for(i = 0; i < 5; ++i){
		vetor[i] *= 2;
		printf("Vetor: %i\n", vetor[i]);
	}
	
	
	
	return 0;
}
