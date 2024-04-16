#include <stdio.h>
 
int main() {
    
    int i;
    int vetor[10];
    
    scanf("%d", &vetor[0]);
    
    for(i = 0; i < 10; ++i){

	    vetor[i + 1] = vetor[i] + vetor[i];

}

	for(i = 0; i < 10; ++i){
		printf("N [%d] = %d\n", i, vetor[i]);
	}
 
    return 0;
}
