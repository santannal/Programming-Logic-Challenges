#include <stdio.h>
 
int main() {
	
	int casos, cont, mortos, n, k;
	
	while(scanf("%i", &casos)){
		if(!casos) break;
		
		for(cont = 0; cont < casos; ++cont){
			
			n, k = 0;
			scanf("%i %i", &n, &k);
			
			for(mortos = 0; mortos < n; mortos){
				
				mortos = mortos + k;
				if(mortos > n){
					for(mortos = 1; mortos < n; mortos){
					mortos = 0;
				}
				}
				printf("Case 1: %i", mortos - k + 2);
			}
		}
		
		return 0;
	}
}
