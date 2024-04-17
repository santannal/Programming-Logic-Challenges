#include <stdio.h>
 
int main() {
 
    int i, vetorT[i], n, j, cont;
    char pe[i];
    
    while(scanf("%d", &n) != EOF){
    	
    	for(i = 0; i < n; ++i){
    		scanf("%d %c", &vetorT[i], &pe[i]);
		}
		
		for(i = 0; i < n; ++i){
			for(j = 0; j <= n; ++j){

				if(i != j && vetorT[i] == vetorT[j] && pe[i] != pe[j]) ++cont;
			}
		}
		
		printf("%d\n", cont);
	}
 
    return 0;
}
