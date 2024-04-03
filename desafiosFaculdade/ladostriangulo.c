#include <stdio.h>

int main(){
	
	float lado1, lado2, lado3;
	
	system("color 0A");
	
	printf("Informe o primeiro lado: ");
	scanf("%f", &lado1);
	
	printf("Informe o segundo lado: ");
	scanf("%f", &lado2);
	
	printf("Informe o terceiro lado: ");
	scanf("%f", &lado3);
	
	if(lado1 == lado2 && lado1 == lado3){
		printf("\nTriangulo equilatero");
	} else{
		if(lado1 == lado2 || lado1 == lado3 || lado2 == lado3){
			printf("\nTriangulo isosceles");
		} else{
			printf("\nTriangulo escaleno");
		}
	}
	return 0;
}
