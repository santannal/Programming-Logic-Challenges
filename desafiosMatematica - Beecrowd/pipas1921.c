#include <stdio.h>
 
int main() {
 
    long int n, i, calculo;
    
    scanf("%li", &n);
    
    calculo += n;
    for(i = 3; i < n - 2; ++i){
        calculo += i;
    }
    
    if(n == 3) calculo = 1;
    if(n == 4) calculo = 3;
    
    printf("%li\n", calculo - 1);
    return 0;
}
