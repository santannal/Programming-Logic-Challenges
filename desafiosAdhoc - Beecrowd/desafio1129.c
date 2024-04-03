#include <stdio.h>
 
int main() {
 
    int N, A, B, C, D, E, i;
    
    while(scanf("%i", &N)){
        
        if(!N) break;
        
        for(i = 0; i < N; ++i){
            
            A, B, C, D, E = 0;
            
            scanf("%d", &A);
            scanf("%d", &B);
            scanf("%d", &C);
            scanf("%d", &D);
            scanf("%d", &E);
            
            if(A <= 127 && B > 127 && C > 127 && D > 127 && E > 127){
                printf("A\n");
            } else{
                if(A > 127 && B <= 127 && C > 127 && D > 127 && E > 127){
                    printf("B\n");
                } else{
                    if(A > 127 && B > 127 && C <= 127 && D > 127 && E > 127){
                        printf("C\n");
                    }else{
                        if(A > 127 && B > 127 && C > 127 && D <= 127 && E > 127){
                            printf("D\n");
                        } else{
                            if(A > 127 && B > 127 && C > 127 && D > 127 && E <= 127){
                                printf("E\n");
                            } else{
                                printf("*\n");
                            }
                        }
                    }
                }
            }
            
        }
    }
 
    return 0;
}
