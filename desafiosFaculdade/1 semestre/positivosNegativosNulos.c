#include <stdio.h>

int main(){
	
	float n, i;
	int positivos = 0, negativos, nulo;
	
	
	for(i = 0; i < 10; ++i){
		
		printf("Digite o numero: ");
		scanf("%d", &n);
		
		if(n > 0){
			positivos = positivos + 1;
		}else{
			negativos = negativos + 1;
		}
	}		
	
	printf("Positivos: %d\n", positivos);
	printf("Negativos: %d\n", negativos);
	
	return 0;
}
