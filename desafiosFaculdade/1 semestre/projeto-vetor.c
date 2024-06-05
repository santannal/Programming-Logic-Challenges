#include <stdio.h>
#define TAM 10

int main(){
	
	int num, x, i, cont;
	int vet1[TAM], vet2[TAM];
	
	system("color F0");
	
	do{
		printf("Digite a quantidade de numeros do vetor 1: ");
		scanf("%d", &num);
	}while(num > 10);

	for(i = 1; i <= num; ++i){
		do{
			printf("Digite o numero da posicao %d: ", i);
			scanf("%d", &vet1[i]);
		}while(vet1[i] < 0);
	}
	
	system("cls");
	
	do{
		printf("Digite a qtd de numeros do vetor 2: ");
		scanf("%d", &num);
	}while(num > 10);
	
	for(i = 1; i <= num; ++i){
		do{
			printf("Digite o numero da posicao %d: ", i);
			scanf("%d", &vet2[i]);
		}while(vet2[i] < 0);
	}
	
	cont = 0;
	for(i = 1; i <= num; ++i){
		if(vet1[i] == vet2[i])
			++cont;
	}
	
	system("cls");
	
	printf("Quantidade de numeros equivalentes em posicoes iguais: %d\n", cont);
	return 0;
}
