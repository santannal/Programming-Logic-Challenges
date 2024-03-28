 #include <stdio.h>
 #include <conio.h>
 
 int main(){
 	
 	system("color FD");
 	
 	printf("===============================================\n");
 	printf("============CALCULADORA INTELIGENTE============\n");
 	printf("===============================================\n");
 	
 	float numero1, numero2, calculo;
 	int opcao;
 	
 	printf("\nDigite o primeiro numero: ");
 	scanf("%f", &numero1);
 	
 	printf("Digite o segundo numero: ");
 	scanf("%f", &numero2);
 	 	
 	printf("\nQual operacao deseja realizar?");
 	printf("\n[1] Soma");
 	printf("\n[2] Subtracao");
 	printf("\n[3] Multiplicacao");
 	printf("\n[4] Divisao");
 	
 	printf("\n\n|Escolha = ");
 	scanf("%i", &opcao);
 	
 	if(opcao == 4 && numero2 == 0){
		printf("\nImpossivel realizar divisao com denominador 0.");	 
	 } else{
	  
 	switch(opcao){
 		case 1: 
 			calculo = numero1 + numero2;
 			printf("\nO resuldado da soma eh igual a: %.2f", calculo);
 			break;
 			
 		case 2:
 			calculo = numero1 - numero2;
 			printf("\nO resuldado da subtracao eh igual a: %.2f", calculo);
 			break;
 		
 		case 3:
 			calculo = numero1 * numero2;
 			printf("\nO resuldado da multiplicacao eh igual a: %.2f", calculo);
 			break;
 		
 		case 4:
 			calculo = numero1 / numero2;
 			printf("\nO resuldado da divisao eh igual a: %.2f", calculo);
 			break;
 		
 		default :
 			printf("Opcao invalida XD");
 			
 		}
 	}
 		
 		return 0;
	 }
 	
 
