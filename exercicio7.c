#include <stdio.h>

int main(){
	
	//variaveis 
	float horaNormal, horaExtra, salario;
	
	//menu
	printf("----------------------------------"
	"\n=============SALARIO=============="
	"\n----------------------------------\n"
	);
	
	//entrada
	printf("\nInsira as horas normais trabalhadas: ");
	scanf("%f", &horaNormal);
	
	printf("Insira as horas extras trabalhadas: ");
	scanf("%f", &horaExtra);
	//processamento
	salario = (horaNormal * 10.00) + (horaExtra * 15.00);
	
	//saída
	printf("\nO salario do funcionario que trabalhou %.2f horas com %.2f horas extras eh igual a: R$ %.2f", horaNormal, horaExtra, salario);
	return 0;
}
