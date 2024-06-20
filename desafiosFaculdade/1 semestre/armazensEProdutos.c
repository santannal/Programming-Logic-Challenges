#include <stdio.h>

int main(){
	int i, j;
	int matriz[4][3], a, c;
	float b;
	
	for(i = 0; i < 4; ++i){
		for(j = 0; j < 3; ++j){
			printf("Insira os valores da linha %i da coluna %i: ", i, j);
			scanf("%d", &matriz[i][j]);
		}
	}
	
	printf("\nESQUEMA - \n\n");
	a = 0;
	for(i = 0; i < 4; ++i){
		for(j = 0; j < 3; ++j){
			printf(" %i ", matriz[i][j]);
			if(i == 0) c += matriz[i][j];
			if(j == 1) a += matriz[i][j];
			if(j == 2) b += matriz[i][j];
		}
		printf("\n");
	}
	
	printf("\nQuantidade de produtos do segundo armazem: %i", a);
	b = b/4;
	printf("\nMedia de produtos no terceiro armazem: %f", b);
	printf("\nQuantidade total do prduto 1: %i", c);
	
	return 0;
}
