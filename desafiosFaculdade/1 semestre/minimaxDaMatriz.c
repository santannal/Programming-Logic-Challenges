#include <stdio.h>

int main(){
	int matriz[4][4];
	int i, j, maior, maiorLinha, minimax, maiorCol;
	
	for(i = 0; i < 4; ++i){
		for(j = 0; j < 4; ++j){
			printf("Digite um numero: ");
			scanf("%d", &matriz[i][j]);
			if(maior < matriz[i][j] || maior == 0){
				maior = matriz[i][j];
				maiorLinha = i;
				maiorCol = j;
			}
		}
	}
	
	for(j = 0; j < 4; ++j){
		if(minimax == 0 || minimax > matriz[maiorLinha][j])
			minimax = matriz[maiorLinha][j];
	}

	
	printf("\n\nMinimax[%d][%d] = %d",maiorLinha, maiorCol, minimax);
	
	return 0;
}
