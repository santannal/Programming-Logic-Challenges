#include <stdio.h>
#include <stdlib.h>

int main(){
	
	char pessoaMaior;
	int i, homens, sexo;
	float altura, maiorH = 0, menorH = 0, mediaMulher;
	
	system("color F0");
	
	
	for(i = 0; i < 5; ++i){
		
		printf("--------------------------------------\n");
		printf("-----------CALCULANDO MEDIA-----------\n");
		printf("--------------------------------------\n");
		
		printf("|\n|DADOS DA PESSOA #%i\n|", i + 1);
		
		printf("\n|Entre com sua altura: ");
		scanf("%f", &altura);
		printf("|Qual o seu sexo? [1-Masc./2-Femin.]: ");
		scanf("%i", &sexo);
		
		if (sexo == 1)  ++homens;
		
		if(sexo == 2){
			mediaMulher = mediaMulher + altura;
		}
		
		if(menorH == 0)  menorH = altura;
		
		if(altura < menorH){
			menorH = altura;
		}
		
		if(maiorH < altura){
			if(sexo == 1){
			 pessoaMaior = 'm';
			} else{
				pessoaMaior = 'f';
			}
		}
	
	system("cls");

	}
	
	mediaMulher = mediaMulher / 5;
	
	printf(" - ESSAS FORAM AS INFORMACOES COLETADAS - \n");
	
	printf("\n|Menor altura do grupo: %.1f metros\n", menorH);
	
	printf("|Media da altura das mulheres: %.1f metros\n", mediaMulher);
	
	printf("|Quantidade de homens: %i \n", homens);
	
	printf("|Sexo da pessoa mais alta: %c\n", pessoaMaior);
	
	return 0;
}
