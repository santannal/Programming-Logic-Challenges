#include <stdio.h>
 
int main() {
 
    int N, qtdQuad, i;
    
    while(scanf("%d", &N)!=0){
    	if(N == 0)	break;
    	for(i = 0; i <= N; ++i){
    		qtdQuad += i * i;
		}
		
		printf("%d\n", qtdQuad);
		qtdQuad = 0;
	}
 
    return 0;
}
