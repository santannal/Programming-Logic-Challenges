#include <stdio.h>
#include <stdlib.h> 
#include <math.h>

int main(){
	
	system("color 0F");
	
	//variáveis
	int qtdMulheres, qtdHomens, qtdCriancas, refrigerante, totalPessoas;
	float picanha, panceta, farofa, vinagrete, queijoCoalho, linguica, coracao, paoDeAlho, cerveja;

	//menu 
	printf("================================");
	printf("\n============CHURRASCO===========");
	printf("\n================================\n");
	
	//entrada
	printf("\nInsira a quantidade de homens: ");
	scanf("%i", &qtdHomens);
	
	printf("Insira a quantidade de mulheres: ");
	scanf("%i", &qtdMulheres);
	
	printf("Insira a quantidade de criancas: ");
	scanf("%i", &qtdCriancas);
	
	//limpa tela
	system("cls");  
	
	//processamento E SAÍDA DE DADOS
	system("color 0B");
	
	printf("=============LISTA==============");
	picanha = (qtdHomens * 200 + qtdCriancas * 100 + qtdMulheres * 150);
	picanha = picanha / 1000;
	printf("\n|\n|1 - Picanha: %.3f kg", picanha);
	
	panceta = qtdHomens * 150 + qtdCriancas * 75 + qtdMulheres * 100;
	panceta = panceta / 1000;
	printf("\n|2 - Panceta: %.3f kg", panceta);
	
	paoDeAlho = qtdHomens * 2 + qtdCriancas * 0.5 + qtdMulheres * 1;
	paoDeAlho = paoDeAlho / 5;
	paoDeAlho = ceil(paoDeAlho);
	printf("\n|3 - Pao de alho: %.0f embalagens", paoDeAlho);
	
	farofa = qtdHomens * 100 + qtdCriancas * 50 + qtdMulheres * 80;
	printf("\n|4 - Farofa: %.2f gramas", farofa);
	
	vinagrete = qtdHomens * 100 + qtdCriancas * 50 + qtdMulheres * 75;
	printf("\n|5 - Vinagrete: %.2f gramas", vinagrete);
	
	cerveja = qtdHomens * 5 + qtdCriancas * 0 + qtdMulheres * 3;
	cerveja = cerveja / 12;
	cerveja = ceil(cerveja);
	printf("\n|6 - Cerveja: %.0f fardos", cerveja);
	
	queijoCoalho = qtdHomens * 5 + qtdCriancas * 3 + qtdMulheres * 4;
	queijoCoalho = queijoCoalho / 10;
	queijoCoalho = ceil(queijoCoalho);
	printf("\n|7 - Queijo Coalho: %.2f embalagens", queijoCoalho);
	
	linguica = qtdHomens * 120 + qtdCriancas * 70 + qtdMulheres * 100;
	linguica = linguica / 1000;
	printf("\n|8 - Linguica: %.3f kg", linguica);
	
	coracao = qtdHomens * 110 + qtdCriancas * 60 + qtdMulheres * 80;
	coracao = coracao / 1000;
	printf("\n|9 - Coracao: %.3f kg", coracao);
	
	refrigerante = qtdHomens * 5 + qtdCriancas * 3 + qtdMulheres * 4;
	printf("\n|10 - Refrigerante: %i latas de 350ml", refrigerante);
	
	totalPessoas = qtdHomens + qtdMulheres + qtdCriancas;
	printf("\n|\n|Observacao: O valor refere-se ao total de %i pessoas. \n", totalPessoas);
	
	return 0;
}

