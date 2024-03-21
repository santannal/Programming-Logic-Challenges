#include <stdio.h>

int main(){
	//variaveis
	float salarioBruto, salarioLiquido, porcentagem = 0.37, desconto;
	
	printf("Insira o salario bruto: $");
	scanf("%f", &salarioBruto);
	
	salarioLiquido = salarioBruto - (salarioBruto * porcentagem);
	desconto = salarioBruto - salarioLiquido;
	
	printf("Seu salario teve um desconto de $%.2f e ficou igual a: $%.2f no valor liquido", desconto, salarioLiquido);
	return 0;
}
