#include <stdio.h>
#include <stdlib.h>

#define TAM 20

int MEDIANA (int vet[], int faixa)
{
  int i; 
  float m1, m2;
     
  switch (faixa % 2) 
  {
    case 0: 
      m1 = vet[faixa / 2 - 1];
      m2 = vet[faixa / 2];     
      m1 += m2;
      return  (m1 / 2);    
    
    case 1: 
      m1 = vet[ (faixa - 1) / 2 ];
      return m1;   
  }  
}

int main(){
	int vetor[TAM]; 
	int mediana; //função que descobre a mediana
	int i, qtd, n, cases, j;
	
	scanf("%d", &cases);
	
	for(j = 0; j < cases; ++j){
	
		scanf("%d", &qtd);	    
		  
		for (i = 0; i < qtd; i++)
		{
		    scanf("%d", &vetor[i]);
		}  
		
		mediana =  MEDIANA (vetor, qtd);
		  
		printf ("Case %d: %d\n", j+1, mediana); 
	}
	  	
	return 0;
}


