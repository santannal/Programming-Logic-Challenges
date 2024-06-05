#include <stdio.h>

unsigned long long fatorando(op){
	unsigned long long i, x = 1;
	
	for(i = 1; i <= op; ++i){
		x = x * i;
	}
	return x;
}

int main() {
	
	unsigned long long n1, n2, calculo;
	
	while(scanf("%llu %llu", &n1, &n2) != EOF){
		calculo = fatorando(n1) + fatorando(n2);
		printf("%llu\n", calculo);
	}
	
	return 0;
}
