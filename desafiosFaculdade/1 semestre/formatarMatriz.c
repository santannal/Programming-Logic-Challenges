#include <stdio.h>

int main(){
	
	int matriz[4][3];
	int i, j;
	
	for(i = 0; i < 4; ++i){
		for(j = 0; j < 3; ++j){
			printf("Digite um numero: ");
			scanf("%d", &matriz[i][j]);
		}
	}
	
	printf("\n");
	for(i = 0; i < 4; ++i){
		for(j = 0; j < 3; ++j){
			printf(" %d", matriz[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
