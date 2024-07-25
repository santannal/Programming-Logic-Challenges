#include <stdio.h>
 
int main() {
 
    int n, i;
    float media, x1, x2, x3;
    
    scanf("%d", &n);
    
    for(i = 0; i < n; ++i){
        media=0;
        scanf("%f %f %f", &x1, &x2, &x3);
        media = ((x1 * 2) + (x2 * 3) + (x3 * 5)) / (2 + 3 + 5);
        
        printf("%.1f", media);
    }
 
    return 0;
}
