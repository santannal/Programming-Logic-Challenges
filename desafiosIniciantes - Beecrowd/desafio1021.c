#include <stdio.h>

void fatoracao(num){
	float notas;
	
	printf("NOTAS:\n");
	notas = num/100;
	printf("%f nota(s) de R$ 100.00\n", notas);
	num = num % 100;
	
	notas = num/50;
	printf("%f nota(s) de R$ 50.00\n", notas);
	num = num % 50;
	
	notas = num/20;
	printf("%f nota(s) de R$ 20.00\n", notas);
	num = num % 20;
	
	notas = num/10;
	printf("%f nota(s) de R$ 10.00\n", notas);
	num = num % 10;
	
	notas = num/5;
	printf("%f nota(s) de R$ 5.00\n", notas);
	num = num % 5;
	
	notas = num/2;
	printf("%f nota(s) de R$ 2.00\n", notas);
	num = num % 2;
	
	printf("MOEDAS:\n");
	
	notas = num/1;
	printf("%f moeda(s) de R$ 1.00\n", notas);
	num = num % 1;
	
	notas = num/0.5;
	printf("%f moeda(s) de R$ 0.50\n", notas);
	num = num % 0.5;
	
	notas = num/0.25;
	printf("%f moeda(s) de R$ 0.25\n", notas);
	num = num % 0.25;
	
	notas = num/0.10;
	printf("%f moeda(s) de R$ 0.10\n", notas);
	num = num % 0.10;
	
	notas = num/0.05;
	printf("%f moeda(s) de R$ 0.05\n", notas);
	num = num % 0.05;
	
	notas = num/0.01;
	printf("%0.0f moeda(s) de R$ 0.01\n", notas);
	num = num % 0.01;
}

int main(){
	
	double num;
	
	if(0 <= num <= 1000000.00){
		fatoracao(num);
	}
	
	return 0;
}
