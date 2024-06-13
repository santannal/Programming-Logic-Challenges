#include <stdio.h>

int mdc(int num1, int num2) {
    int resto;
    
    do {
        resto = num1 % num2;
        num1 = num2;
        num2 = resto;
    } while (resto != 0);
    
    return num1;
}
  
  
int main() {
 
    int i, fig, fig2, n, resp;
    
    scanf("%d", &n);
    
    for(i = 0; i < n; ++i){
        scanf("%d %d", &fig, &fig2);
        resp = mdc(fig, fig2);
    	
    	printf("%d\n", resp);
    }
 
    return 0;
}
