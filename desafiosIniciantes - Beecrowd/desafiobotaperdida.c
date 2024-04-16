#include <stdio.h>
 
int verificando(int cont, int vetorNum[], char vetorLetra[], int x){
	
	int i, j;
	
	for(i = 0; i < x; ++i){
		for(j = 0; j < x; ++j){
			if(vetorNum[i] == vetorNum[j] && vetorLetra[i] == vetorLetra[j]){
				++cont;
			}
		}
	}
	
	return cont;
} 

 
int main() {
 
    int x, i, cont, j, vetorNum[i];
	char vetorLetra[i];
    
    while(scanf("%d", &x) != EOF){
		
		for(i = 0; i < x; ++i){
			scanf("%d", &vetorNum[i]);
			scanf("%c", &vetorLetra[i]);
			
		}
		
		printf("%d", verificando(cont, vetorNum, vetorLetra, x));
	}
 
    return 0;
}
