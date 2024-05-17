#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int i, numFilho;
	float mediaSalario, mediaNumFilhos, maiorSalario, porcentagemPessoa, salario, contPerc;
	
	system("color D");
	
	for(i = 0; i < 15; ++i){
		
		printf("------------------------------------\n");
		printf("---------PREFEITURA NARNIA----------\n");
		printf("------------------------------------\n");
		
		printf("\nMORADOR #%d\n", i + 1);
		
		printf("\nDigite o salario do morador: R$");
		scanf("%f", &salario);
		printf("Digite o numero de filhos deste morador: ");
		scanf("%d", &numFilho);
		
		mediaSalario += salario;
		mediaNumFilhos += numFilho;
		
		if(salario > maiorSalario){
			maiorSalario = salario;
		}
		
		if(salario > 1000){
			++contPerc;
		}
		system("cls");
	}
	
	mediaSalario = mediaSalario / 15;
	printf("|Media do salario da populacao: %.2f\n", mediaSalario);
	
	mediaNumFilhos = mediaNumFilhos / 15;
	printf("|Media do numero de filhos: %.1f\n", mediaNumFilhos);
	
	printf("|Maior salario: %.2f\n", maiorSalario);
	
	contPerc = contPerc / 15 * 100;
	printf("|Porcentagem de pessoas com salario maior que mil reais: %.1f%", contPerc);
	
	
	return 0;
}

