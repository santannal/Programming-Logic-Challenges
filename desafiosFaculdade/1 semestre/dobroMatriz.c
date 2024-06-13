#include <stdio.h>

int main(){
	int i, j;
	int matriz[3][3], matrizDobro[3][3];
	
	for(i = 0; i < 3; ++i){
		for(j = 0; j < 3; ++j){
			printf("Digite o numero: ");
			scanf("%d", &matriz[i][j]);
			matrizDobro[i][j] = matriz[i][j] * 2;
		}
	}
	
	printf("\nMatriz formatada: \n\n");
	for(i = 0; i < 3; ++i){
		for(j = 0; j < 3; ++j){
			printf(" %d", matrizDobro[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
