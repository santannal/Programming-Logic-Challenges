#include <stdio.h>

int main() {
 
    int i, j, x;    
    scanf("%d", &x);
    
    for(i = 0; i < x; ++i){
    	int damage = 0, bullets = 0;
    	scanf("%d", &bullets);
    	char jumps[bullets];
    	int n[bullets];
    	for(j = 0; j <= bullets; ++j){
    		scanf("%d", &n[j]);
		}
		for(j = 0; j <= bullets; ++j){
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
