#include <stdio.h>
#include <stdbool.h>
 
int main() {
 
    int num, i, cases, j;
    bool teste;
    
    scanf("%d", &cases);
    for(i = 0; i < cases; ++i){
    	teste = false;
        scanf("%i", &num);
        for(j = 0; j < num/2; ++j){
            if(num % j == 0){
            	teste = true;
            	break;
			}
        }
            
        if(teste == true){
            printf("Not Prime\n");
        }
        else{
            printf("Prime\n");
        }
    }
 
    return 0;
}
