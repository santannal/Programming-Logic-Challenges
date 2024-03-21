#include <stdio.h>

int main(){
	float lado, area;
	
	printf("Digite o lado do quadrado (m): ");
	scanf("%f", &lado);
	
	area = lado * lado;
	
	printf("A area do quadrado eh igual a: %.2f metros", area);
	
	return 0;
}
