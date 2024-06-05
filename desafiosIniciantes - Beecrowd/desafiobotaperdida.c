#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main() {
 
    int i, vetorT[1000], n, j, cont;
    char pe[1000];
    bool ver[1000] = {false};
    
    while(scanf("%d", &n) != EOF){
    	cont = 0;	
	    for(i = 0; i < n; ++i){
	    	scanf("%d %c", &vetorT[i], &pe[i]);
	    	if(ver[i] != true){
	    		for(j = 0;j < n; ++j){
					if(vetorT[i] == vetorT[j] && pe[i] != pe[j]){
							cont += 1;
							ver[j] = true;
							break;
						}
					}
				}
			}
		cont = floor(cont);
		printf("%d\n", cont);
		cont = 0;
	}
 
    return 0;
}
