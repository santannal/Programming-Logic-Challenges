#include <stdio.h>

int main(){
	int matriz[4][4];
	int i, j;
	
	for(i = 0; i < 4; ++i){
		for(j = 0;j < 4; ++j){
			printf("Digite um numero: ");
			scanf("%d", &matriz[i][j]);
		}
	}
	
	printf("\n\nDiagonal Principal: \n\n");
	for(i = 0; i < 4; ++i){
		printf("%d ", matriz[i][i]);
	}
	
	
	return 0;
}
