#include <stdio.h>
 
int main() {
 
    int i, x, j, nTurma, maior=0;
    double media;
     
    scanf("%d", &x);
    
    for(i = 0; i < x; ++i){
    	media = 0;
    	maior = 0;
    	scanf("%d", &nTurma);
    	int notas[nTurma];
    	for(j = 0; j < nTurma; ++j){
    		scanf("%d", &notas[j]);
    		media += notas[j];
		}
		
		media = media / nTurma;
		
		for(j = 0; j < nTurma; ++j){
    		if(notas[j] > media){
    			maior++;
			}
		}
		
		double porcent = ((double)maior / nTurma) * 100;
		printf("%.3lf%%\n", porcent);
		porcent = 0;	
	}
 
    return 0;
}
