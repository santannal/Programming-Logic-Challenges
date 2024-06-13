#include <stdio.h>

int main(){
	int matriz[3][4];
	int i, j, linha, soma;
	
	for(i = 0; i < 3; ++i){
		for(j = 0; j < 4; ++j){
			printf("Digite um numero: ");
			scanf("%d", &matriz[i][j]);
		}
	}
	
	for(i = 0; i < 3; ++i){
		printf("LINHA No: %d = ", i);
		for(j = 0; j < 4; ++j){
			printf(" %d", matriz[i][j]);
		}
		printf("\n");
	}
	
	do{
		printf("\nEscolha uma linha para somar: ");
		scanf("%d", &linha);
	}while(linha > 2 || linha < 0);
	
	for(j = 0; j < 4; ++j){
		soma += matriz[linha][j];
	}
	
	printf("SOMA = %d", soma);
	
	
	return 0;
}
