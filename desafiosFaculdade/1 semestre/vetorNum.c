#include <stdio.h>

int main(){
	int i;
	int vetor[10];
	
	printf("Insira 10 numeros: ");
	for(i = 0; i < 10; ++i){
		scanf("%d", &vetor[i]);
	}
	
	system("cls");
	system("color FD");
	for(i = 0; i < 10; ++i){
		printf("%d\n", vetor[i]);
	}
	

	
	return 0;
	
}
