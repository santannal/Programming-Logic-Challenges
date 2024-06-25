#include <stdio.h>
 
int main() {
 
    int casos, i, j;
    
    scanf("%d", &casos);
    int vet[casos], cont[casos];
    
    for(i = 0; i < casos; ++i){
    	scanf("%d", &vet[i]);
    	cont[i] = 0;
	}
	
	int temp;
	
	for (i = 0; i < casos-1; i++) {
        for (j = 0; j < casos-i-1; j++) {
            if (vet[j] > vet[j+1]) {
                temp = vet[j];
                vet[j] = vet[j+1];
                vet[j+1] = temp;
            }
        }
    }
	
	for(i = 0; i < casos; ++i){
		for(j = 0; j < casos; ++j){
    		if(vet[i] == vet[j]){
    			cont[i] += 1;
    		}
    	}
	}
	
	for(i = 0; i < casos; ++i){
		if(vet[i] > 0)
			printf("%d aparece %d vez(es)\n", vet[i], cont[i]);
		for(j = i + 1; j < casos; ++j){
			if(vet[i] == vet[j]) vet[j] = 0;
		}
	}
 
    return 0;
}
