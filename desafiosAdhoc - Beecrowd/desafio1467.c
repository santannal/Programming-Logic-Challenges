#include <stdio.h>
 
int main() {
 
    int a, b, c;
    
    while(scanf("%d %d %d", &a, &b, &c) != EOF){
        
        if(a == b && a == c){
            printf("*\n");
        } else{
            if(a == b && a != c){
                printf("C\n");
            } else{
                if(b == c && c != a){
                    printf("A\n");
                }else{
                    printf("B\n");
                }
            }
        }
    }
    
    
 
    return 0;
}
