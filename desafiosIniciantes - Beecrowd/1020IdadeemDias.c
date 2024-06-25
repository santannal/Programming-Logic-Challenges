#include <stdio.h>
#include <math.h>
 
int main() {
 
    int old;
    
    scanf("%d", &old);
    printf("%.0f anos(s)\n", floor(old / 365));
    printf("%.0f mes(es)\n", floor(old % 365 / 30));
    printf("%.0f dia(s)\n", floor(old % 365 % 30));
 
    return 0;
}
