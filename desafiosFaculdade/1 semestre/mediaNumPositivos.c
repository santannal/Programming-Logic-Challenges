#include <stdio.h>

int main(){
	
	float media, num;
	int i, x, qtd = 0;
	
	printf("Quantos casos deseja testar? ");
	scanf("%d", &x);
	
	for(i = 0; i < x; ++i){
		
		printf("Digite um numero: ");
		scanf("%f", &num);
		
		if(num > 0){
			media = media + num;
			qtd = qtd + 1;
		}
	}
	
	media = media / qtd;
	printf("A media eh igual a: %.1f", media);
	return 0;
}
