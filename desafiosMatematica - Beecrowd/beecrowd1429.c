#include <stdio.h>
#include <math.h>

int main() {
 
    long long int n, calculo, fatUnidade, fatDezena, fatCentena, fatMilhar, fatDezMilhar;
    
   /* printf("%d\n", 719 % 10);
    printf("%d\n", 719 % 100);
    printf("%d\n", 719 % 1000);
    printf("%d\n", 1253 % 10000); */
    
    while(scanf("%lli", &n) != 0){
    	if(n == 0)	break;
    	
    	fatUnidade = (n % 10);
    	fatDezena = ((n % 100) - (n % 10))/10;
    	fatCentena = ((n % 1000) - (n % 100))/100;
    	fatMilhar = ((n % 10000) - (n % 1000))/1000;
    	fatDezMilhar = ((n % 100000) - (n % 10000))/10000;
    	
    	calculo = 0;
    	
    	calculo = fatUnidade * 1 + fatDezena * 2 + fatCentena * 6 + fatMilhar * 24 + fatDezMilhar * 120;
    	
    	printf("%lli\n", calculo);
    	
	}
 
    return 0;
}
