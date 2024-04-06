#include <stdio.h>

int calculadora(int caso){
			
		int n1, n2, contador, calculo;
		char caractere;
		for(contador = 0; contador < caso; ++contador){
			
			scanf("%d %c %d", &n1, &caractere, &n2);
			
			if(n1 == n2){
				calculo = n1 * n2;
				printf("%i\n", calculo);
			} else{
				if(caractere >= 'A' && caractere <= 'Z'){
					calculo = n2 - n1;
					printf("%i\n", calculo);
				} else{
					calculo = n2 + n1;
					printf("%i\n", calculo);
				}
			}
			
		}

	} 

int main(){
		
		int teste;
		scanf("%d", &teste);

		calculadora(teste);

		
	return 0;
}
