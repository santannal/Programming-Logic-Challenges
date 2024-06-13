#include <stdio.h>

int main(){
	int soma, i, j;
	int matriz[3][4];
	
	for(i = 0; i < 4; ++i){
		for(j = 0; j < 3; ++j){
			printf("Digite um No: ");
			scanf("%d", &matriz[j][i]);
			soma += matriz[j][i];
		}
	}
	
	for(i = 0; i < 4; ++i){
		for(j = 0; j < 3; ++j){
			printf("%d	", matriz[j][i]);
		}
		printf("\n");
	}
	
	printf("A soma dos elementos: %d", soma);
	return 0;
}
