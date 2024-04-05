#include <stdio.h>
 
int main() {
 
    int n, i = 0, num1, num2, calculo;
    char letra;
    
    while(scanf("%i", &n) != EOF){
        
        for(i; i < n; i++){
            
            num1, num2, calculo = 0;
            letra = 'a';

            scanf("%i %c %i", &num1, &letra, &num2);
            
            if(num1 != num2){
                if (letra >= 'A' && letra <= 'Z'){
                calculo = num2 - num1;
                printf("%i\n", calculo);
                }else{
                    calculo = num1 + num2;
                    printf("%i\n", calculo);
                }
            } else{
                calculo = num1 * num2;
                printf("%i\n", calculo);
            }
        }
    }
 
    return 0;
}
