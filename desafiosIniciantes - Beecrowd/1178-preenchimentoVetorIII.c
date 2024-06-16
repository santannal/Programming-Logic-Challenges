#include <stdio.h>
 
int main() {
    int i;
    double X;
    double N[100];
    
    scanf("%lf", &N[0]);
    
    for(i = 0; i < 100; ++i){
        printf("N[%d] = %.4lf\n", i, N[i]);
        N[i + 1] = N[i]/2;
    }
 
    return 0;
}
