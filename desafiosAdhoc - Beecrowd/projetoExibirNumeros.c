#include <stdio.h>
#include <locale.h>

void palindromo(int num){             
  int palindromo = 0;                   
  int numero = num;                         

  while(numero)
  {
    int digito = numero % 10;                  
    palindromo =  palindromo * 10 + digito;  
    numero /= 10;                           
  }  
  printf("%s", palindromo==num? " = SIM, É PALÍDROMO" : " = NÃO É PALÍDROMO");    
}

void organizarVetor(int num){
	int i, cont=0;
	int vetor[10];
	int valor = num;
    	
    for(i = 0; i < 11; ++i){
    	vetor[i] = 0;
	}
	
    do{
        vetor[cont] = valor % 10;
        valor /= 10;
        cont++;
    }while( valor > 9 );

    
    vetor[cont]=valor;
    printf("\n");
    printf("{");
    
    for(i=10; i>=0; i--){
        printf("%d", vetor[i]);
        if(i != 0)
        	printf(",");		
    }
    
    printf("}");
}

int main(){
	system("color B");
	int num, respostaVetor;
	setlocale(LC_ALL, "Portuguese");
	
	do{
	
		printf("============================\n");
		printf("====PROJETO DE ALGORITMO====\n");
		printf("============================\n");
	
	    printf("\n|Digite um numero inteiro: ");
	    scanf("%d",&num);
	    
	    printf("\nResposta:\n");
	    
	    organizarVetor(num); 
	    palindromo(num);
		
		if(num != 0){	
			printf("\n\n");
			system("pause");
		}
		
		system("cls");
	}while(num != 0);
    return 0;
}
