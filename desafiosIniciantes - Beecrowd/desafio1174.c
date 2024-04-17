#include <stdio.h>
 
int main() {
 
    float vetor[100], n;
    int i, cont;
    
    for(i = 0; i < 100; ++i){
    	scanf("%f", &n);
    	vetor[i] = n;
    	if(n <= 10){
    		cont = cont + 1;
		}
	}
	
	for(i = 0; i < 100; ++i){
		if(vetor[i] <= 10){
			printf("A[%d] = %.1f\n", i, vetor[i]);
		}
	}
	
	 
    return 0;
}
