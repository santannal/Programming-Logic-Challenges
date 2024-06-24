#include <stdio.h>
 
int main() {
 
    double A, B;
    
    while(scanf("%lf %lf", &A, &B) != EOF){
        printf("%.0lf\n", (A - B < 0) ? (A - B) * -1 : (A - B)* 1);
    }
 
    return 0;
}
