#include <stdio.h>

int main(){
	
	int i;
	float maior, num, menor;
	
	for(i = 0; i < 10; ++i){
		
		printf("Informe o numero: ");
		scanf("%f", &num);
		
		if(maior < num){
			maior = num;
		}
		
		if(menor == 0) menor = num;
		
		if(num < menor){
			menor = num;
		}
		
	}
	
	printf("\nMenor: %.1f\n", menor);
	printf("Maior: %.1f", maior);
}
