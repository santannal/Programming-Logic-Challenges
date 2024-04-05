#include <stdio.h>
 
int main() {
 
    int n, cont, feed, dia, cont2 = 0;
    
    scanf("%d", &n);
    
    while(cont2 < n){
    	
    	cont2 = cont2 + 1;
        
        scanf("%d", &dia);
        
        for(cont = 0; cont < dia; ++cont){
            
            scanf("%d", &feed);
            
            if(feed == 1){
                printf("Rolien\n");
            } else{
                if(feed == 2){
                    printf("Naej\n");
                } else{
                    if(feed == 3){
                        printf("Elehcim\n");
                    } else{
                        if(feed == 4){
                            printf("Odranoel\n");
                        }
                    }
                }
            }
            
        }
        
    }
 
    return 0;
}
