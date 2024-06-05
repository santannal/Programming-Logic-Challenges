#include <stdio.h>
#define TAM 10

int main(){
	
	int i, num, cont;
	int vet[TAM];
	
	for(i = 0; i < 10; ++i){
		printf("Digite o %do numero: ", i + 1);
		scanf("%d", &vet[i]);
	}
	
	printf("Qual numero deseja procurar? ");
	scanf("%d", &num);
	
	cont = 0;
	for(i = 0; i < 10; ++i){
		if(vet[i] == num)
			++cont;
	}
	
	if(cont > 0)
		printf("O numero %i se repete %d vezes", num, cont);
	else
		printf("O numero %i nao esta no vetor!", num);
		
		
	return 0;
}
