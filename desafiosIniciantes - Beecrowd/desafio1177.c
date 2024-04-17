#include <stdio.h>
 
int main() {
 
    int i, j = 0, vetor[1000], t, resp;
    
    scanf("%d", &t);
    
    for(i = 0; i <= t; ++i){	
    
		vetor[i] = i;

	}
	
	for(i = 0; i < 1000; ++i){
		
		printf("N[%d] = %d\n", i, vetor[j]);
		
		if(j == t - 1){
			j = 0;
		} else{
			j = j+1;
		}
	}
 
    return 0;
}
