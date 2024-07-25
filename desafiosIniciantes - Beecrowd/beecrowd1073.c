#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
int main() {
 
    long long int n, i;
    
    scanf("%lld", &n);
    
    for(i = 1; i <= n; ++i){
    	if(i % 2 == 0)
    		printf("%lld^2 = %.0f\n", i, pow(i, 2));
	}
 
    return 0;
}
