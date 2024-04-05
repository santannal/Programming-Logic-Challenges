#include <stdio.h>

int main(){
	int m, f, cont, calculo;
	
	while(scanf("%d %d", &m, &f)){
		if(!m && !f) break;
		calculo = f + m;
		printf("%d\n", calculo);
	}
	
	return 0;
}
