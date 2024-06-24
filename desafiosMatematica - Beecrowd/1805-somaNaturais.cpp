#include <stdio.h>
 
int main() {
 
    long int A, B, VALUE;
    
    if(1 <= A <= B <= 1000000000){
        scanf("%li %li", &A, &B);
        
        for(A; A <= B; ++A){
            VALUE += A;
        }
        
        printf("%li", VALUE);
    }
 
    return 0;
}
