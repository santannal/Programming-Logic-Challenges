#include <stdio.h>

int main(){
	
	int i, j, pares, impares;
	float media;
	int matriz[3][3];
	
	for(i = 0; i < 3; ++i){
		for(j = 0; j < 3; ++j){
			printf("INSIRA OS VALORES DA MATRIZ: ");
			scanf("%d", &matriz[i][j]);
		}
	}
	
	printf("\n");
	impares = 0;
	for(i = 0; i < 3; ++i){
		for(j = 0; j < 3; ++j){
			printf(" %d", matriz[i][j]);
			media += matriz[i][j];
			if(matriz[i][j] % 2 == 0) pares += matriz[i][j];
			else impares++;
		}
		printf("\n");
	}
	
	printf("\nSoma de numeros pares: %d", pares);
	
	media = media / 9;
	printf("\nMedia dos numeros inseridos: %.1f", media);
	
	printf("\nQuantidade de numeros impares na matriz: %d", impares);
	
	return 0;
}
	
	
