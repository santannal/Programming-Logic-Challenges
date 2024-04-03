#include <stdio.h>
 
int main() {
 
        long long int a, b, r;
        
        while(scanf("%lli %lli", &a, &b) != EOF){
        
        r = a ^ b;
        printf("%lli\n", r);

            
        }
        
 
    return 0;
}
