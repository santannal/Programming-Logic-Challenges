#include <stdio.h>

int main() {
 
    int i, j, n[j], x, bullets, damage;
    char jumps[j];
    
    scanf("%d", &x);
    
    for(i = 0; i < x; ++i){
    
    	scanf("%d", &bullets);
    	
    	for(j = 0; j < bullets; ++j){
    		n[j] = 0;
    		jumps[j] = 0;
		}
    	
    	for(j = 0; j < bullets; ++j){
    		scanf("%d", &n[j]);
		}
		for(j = 0; j < bullets; ++j){
    		scanf("%c", &jumps[j]);
		}

		for(j = 0; j < bullets; ++j){
			if(n[j] == 1 && jumps[j] == 'S' || n[j] == 2 && jumps[j] == 'S' || n[j] > 2 && jumps[j] == 'J')
				++damage;
		}
		
		printf("%d\n", damage);
	}
 
    return 0;
}
