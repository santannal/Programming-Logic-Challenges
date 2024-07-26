#include <stdio.h>
 
int main() {
 
    long long int n, calc;
    
    scanf("%lli", &n);
    
    calc = ((n * n) - (n * 3)) / 2;
    
    printf("%lli\n", calc);
 
    return 0;
}
