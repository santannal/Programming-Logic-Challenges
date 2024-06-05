#include <stdio.h>

int main() {
 
    int i, j, n[1000], x, bullets, damage;
    char jumps[1000];
    
    scanf("%d", &x);
    
    for(i = 0; i < x; ++i){
    	damage = 0;
    	scanf("%d", &bullets);
    	for(j = 0; j < bullets; ++j){
    		scanf("%d", &n[j]);
		}
		for(j = 0; j < bullets; ++j){
    		scanf("%c", &jumps[j]);
		}
		
		for(j = 0; j < bullets; ++j){
    		if(jumps[j] == 'J' && n[j] > 2 || jumps[j] == 'S' && n[j] <= 2)
    			++damage;
		}
		
		printf("%d\n", damage);
	}
 
    return 0;
}
