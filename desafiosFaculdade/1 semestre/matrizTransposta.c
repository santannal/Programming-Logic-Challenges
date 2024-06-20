#include <stdio.h>

int main(){
	
	int i, j;
	int matriz[7][7], matrizTrans[7][7];
	
	for(i = 0; i < 7; ++i){
		for(j = 0; j < 7; ++j){
			printf("INSIRA OS VALORES DA MATRIZ: ");
			scanf("%d", &matriz[i][j]);
		}
	}
	
	printf("\n\nMATRIZ ORIGINAL - \n\n");
	for(i = 0; i < 7; ++i){
		for(j = 0; j < 7; ++j){
			printf(" %d ", matriz[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\nMATRIZ TRANSPOSTA - \n\n");
	
	
	for(i = 0; i < 7; ++i){
		for(j = 0; j < 7; ++j){
			printf(" %d ", matriz[j][i]);
		}
		printf("\n");
	}
	
	return 0;
}
