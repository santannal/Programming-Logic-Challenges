#include <stdio.h>

int main(){
	int matriz[5][3];
	int maior, i, j;
	
	for(i = 0; i < 5; ++i){
		for(j = 0; j < 3; ++j){
			printf("Digite um numero: ");
			scanf("%d", &matriz[i][j]);
			if(matriz[i][j] > maior || maior == 0){
				maior = matriz[i][j];
			}
		}
	}
	
	printf("\nMatriz formatada: \n\n");
	
	for(i = 0; i < 5; ++i){
		for(j = 0; j < 3; ++j){
			printf(" %d", matriz[i][j]);
		}
		printf("\n");
	}
	
	printf("\nMaior numero encontrado: %d", maior);
	
	return 0;
}
