#include <stdio.h>

int main(){
	int i;
	int vetor[10];
	
	printf("Insira 10 numeros: ");
	for(i = 0; i < 10; ++i){
		scanf("%d", &vetor[i]);
	}
	
	system("cls");

	for(i = 9; i >= 0; i = i-1){
		printf("%d\n", vetor[i]);
	}
	

	
	return 0;
	
}
