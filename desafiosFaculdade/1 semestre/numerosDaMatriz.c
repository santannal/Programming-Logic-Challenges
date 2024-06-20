#include <stdio.h>
#include <stdbool.h>
int main(){
	
	int i, j;
	float matriz[4][5], value;
	bool teste = false;
	
	for(i = 0; i < 4; ++i){
		for(j = 0; j < 5; ++j){
			printf("INSIRA OS VALORES DA MATRIZ: ");
			scanf("%f", &matriz[i][j]);
		}
	}
	printf("\n\n");
	for(i = 0; i < 4; ++i){
		for(j = 0; j < 5; ++j){
			printf(" %.1f ", matriz[i][j]);
		}
		printf("\n");
	}
	
	printf("Qual valor desejas procurar? ");
	scanf("%f", &value);
	
	for(i = 0; i < 4; ++i){
		for(j = 0; j < 5; ++j){
			if(matriz[i][j] == value){
			  printf("\n\nNumero %.1f encontrado, nas posicoes:"
			  "\nLinha: %i"
			  "\nColuna: %i\n", value, i, j);
			  teste = true;
			}
		}
	}

	if(teste == false) printf("\nValor nao encontrado uwu");
	
	
	return 0;
}
