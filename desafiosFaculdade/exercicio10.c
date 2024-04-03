#include <stdio.h>

int main(){
	int anoNascimento, idade;
	
	printf("Insira seu ano de nascimento: ");
	scanf("%d", &anoNascimento);
	
	idade = (2024 - anoNascimento) * 365;
	
	printf("\nSeu tempo de vida em dias eh aproximadamente igual a: %i dias", idade);
	return 0;
}
