#include <stdio.h>

int main(){
	int i, j;
	int matriz[5][5], somas[4];
	
	for(i = 0; i < 5; ++i){
		for(j = 0; j < 5; ++j){
			printf("Digite um No: ");
			scanf("%d", &matriz[i][j]);
		}
	}
	system("cls");
	system("color D");
	printf("MATRIZ INSERIDA: \n\n");
	
	for(i = 0; i < 5; ++i){
		for(j = 0; j < 5; ++j){
			printf(" %d ", matriz[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\n");
	for(i = 0; i < 5; ++i){
		somas[0] += matriz[i-1][i];
	}
	
	printf("Soma logo acima da diagonal principal: %d", somas[0]);
	
	for(i = 0; i < 5; ++i){
		somas[1] += matriz[i+1][i];
	}
	
	printf("\nSoma logo abaixo da diagonal principal: %d", somas[1]);
	
	for(i = 0; i < 3; ++i){
		somas[2] += matriz[i+2][i];
	}
	
	for(i = 0; i < 2; ++i){
		somas[2] += matriz[i+3][i];
	}
	
	for(i = 0; i < 1; ++i){
		somas[2] += matriz[i+4][i];
	}
	
	printf("\nSoma abaixo da diagonal principal: %d", somas[2]);
	
	for(i = 0; i < 3; ++i){
		somas[3] += matriz[i][i + 2];
	}
	
	for(i = 0; i < 2; ++i){
		somas[3] += matriz[i][i+3];
	}
	
	for(i = 0; i < 1; ++i){
		somas[3] += matriz[i][i+4];
	}
	
	printf("\nSoma acima da diagonal principal: %d", somas[3]);
	
	return 0;
}
