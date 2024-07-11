#include <stdio.h>
 
int main() {
 
    int i, cont=0;
    float num, media=0;
    
    for(i = 0; i < 6; ++i){
        scanf("%f", &num);
        if(num > 0){
            cont++;
            media += num;
        }
    }
    
    printf("%d valores positivos\n", cont);
    printf("%.1f\n", media/cont);
 
    return 0;
}
