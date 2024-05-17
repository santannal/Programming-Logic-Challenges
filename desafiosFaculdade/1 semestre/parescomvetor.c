#include <stdio.h>

int main(){
	int i;
	int vetor[100];
	
	for(i = 0; i < 100; ++i){
		vetor[i] = i;
	}
	
	for(i = 0; i < 100; ++i){
	if(vetor[i] % 2 == 0)
		printf("%d\n", vetor[i]);
	}
	return 0;	
}
