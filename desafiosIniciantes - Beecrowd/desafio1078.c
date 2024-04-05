#include <stdio.h>

int main(){
	
	int contador = 10, calculo, n, i;
	
	scanf("%d", &n);
	
	for(i = 1; i <= contador; ++i){
		
		calculo = 0;
		
		calculo = n * i;
		printf("%i x %i = %i\n", i, n, calculo);
	}
	
	
	return 0;
}
