#include <stdio.h>

int main(){
	int i, j, tamC, tamL;
	
	printf("Insira o tamanho da linha: ");
	scanf("%d", &tamL);
	printf("Insira o tamanho da coluna: ");
	scanf("%d", &tamC);
	
	printf("\n");
	
	int matriz[tamL][tamC];
	
	for(i = 0; i < tamL; ++i){
		for(j = 0; j < tamC; ++j){
			printf("Digite os valores da matriz: ");
			scanf("%d", &matriz[i][j]);
		}
	}
	
	printf("\nMATRIZ FOMATADA: \n\n");
	
	for(i = 0; i < tamL; ++i){
		for(j = 0; j < tamC; ++j){
			printf(" %d ", matriz[i][j]);
		}
		printf("\n");	
	}
	
	
	printf("\nSOMA DAS COLUNAS - \n\n");
	for(i = 0; i < tamC; ++i){
		int somaCol[tamC];
		somaCol[i] = 0;
		for(j = 0; j < tamL; ++j){
			somaCol[i] += matriz[j][i];
		}
		
		printf("SOMA DA COLUNA %i : %i\n", i+1, somaCol[i]);
		
	}


	
	return 0;
	
}
