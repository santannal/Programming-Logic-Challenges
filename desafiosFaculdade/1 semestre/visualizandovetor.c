#include <stdio.h>

int main(){
	int i, pos;
	int vetor[8];
	
	for(i = 0; i < 8; ++i){
		printf("Digite o valor %i: ", i);
		scanf("%d", &vetor[i]);
	}
	
	printf("\nDigite uma posicao para visualizar: ");
	scanf("%d", &pos);
	printf("Valor desejado: %i", vetor[pos]);
	
	return 0;
}
