#include <stdio.h>
#define TAM 10

int main()
{
	int i, j = 9;
	int vet[TAM], vetIn[TAM];
	
	for(i = 0; i < TAM; ++i){
		printf("Digite o %io numero do vetor: ", i);
		scanf("%d", &vet[i]);
		vetIn[j] = vet[i];
		j = j-1;
	}

	printf("POSICOES DOS VETORES COM O MESMO VALOR = {");
	for(i = 0; i < TAM; ++i){
		if(vet[i] == vetIn[i]){
			printf(" %i ", i, vetIn[i]);
		}
	}
	printf("}");
	
	return 0;
	
}
