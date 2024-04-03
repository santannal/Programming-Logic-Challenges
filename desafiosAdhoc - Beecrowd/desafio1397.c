#include <stdio.h>
 
int main() {
 
    int num, a, b, contP1, contP2, x;
    
    while(scanf("%i", &num)){
        
        if(!num) break;
        
        contP1 = 0;
        contP2 = 0;
        
        for(x = 0; x < num; ++x){

        scanf("%i", &a);
        scanf("%i", &b);
        
        if(a > b){
            ++contP1;
        } else{
        	if(b > a){
            ++contP2;
        } else{
        	contP1 = contP1 + 0;
		}
        }
        }
         printf("%i %i\n", contP1, contP2);
    }
    
    return 0;
}
