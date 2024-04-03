#include <stdio.h>

int main(){
	
	int escolha;
	float altura, peso, pesoIdeal, margemErroMais, margemErroMenos;
	
	printf("====================");
	printf("==== PESO IDEAL ====");
	printf("====================");
	
	printf("\nQual genero voce se identifica? ");
	printf("\n[1] Masculino;");
	printf("\n[2] Feminino.");
	printf("\nInsira sua escolha: ");
	scanf("%i", &escolha);
	
	printf("\nQual sua altura? Resposta (metros): ");
	scanf("%f", &altura);
	
	printf("Qual sua massa? Resposta (kg): ");	
	scanf("%f", &peso);
	
	
	if(escolha == 1){
 			pesoIdeal = (72.7 * altura) - 62;
 			printf("\nSeu peso ideal eh: %.1f | ", pesoIdeal);
 		} else{
 			if(escolha == 2){
 				pesoIdeal = (62.1 * altura) - 48.7;
		 		printf("\nSeu peso ideal eh: %.1f | ", pesoIdeal);
			 } else{
			 		printf("Opcao invalida XD");
			 }
		 }
		 
		margemErroMais = pesoIdeal + (pesoIdeal * 0.05);
		margemErroMenos = pesoIdeal - (pesoIdeal * 0.05);
		
		 if(escolha == 1 || escolha ==2){
	
			 if(peso <= margemErroMais && peso >= margemErroMenos){
			 	printf("voce esta no peso ideal");
			 } else{
			 	if(peso > margemErroMais){
			 		printf("voce esta acima do peso");
				 } else{
				 	printf("voce esta abaixo do peso");
				 }
			 }
	}

	return 0;
}
