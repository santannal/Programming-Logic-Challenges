#include <stdio.h>
 
int main() {
 
    int qtd, codigo;
    float valor;
    float produto1 = 4;
    float produto2 = 4.5;
    float produto3 = 5;
    float produto4 = 2;
    float produto5 = 1.50;
    
    scanf("%i", &codigo);
    scanf("%i", &qtd);
    
    if(codigo == 1){
        valor = produto1 * qtd;
    } else{
        if(codigo == 2){
            valor = produto2 * qtd;
        }else{
            if(codigo == 3){
                valor = produto3 * qtd;
            } else{
                if(codigo == 4){
                    valor = produto4 * qtd;
                }else{
                    if(codigo == 5){
                        valor = produto5 * qtd;
                    }
                }
            }
        }
    }
    
    printf("Total: R$ %.2f\n", valor);
 
    return 0;
}
