#include <stdio.h>

int main() {
	
    int i, j, h, x, cont = 0;

    printf("Entre com uma altura (1 a 10): ");
    scanf("%d", &h);
    
    if(h <= 10 && h > 0){
    
	    system("cls");
	    system("color 0F");
	
		for(i = 0; i < h * 2; ++i){
			printf("x");
		}
		
		for(j = 0; j <= h; ++j){

			for(i = 0; i < h / 2; ++i){
				printf("\nx");
				for(x = 1; x < h * 2 - 1; ++x){
					printf(" ");
				}
				printf("x");
			}
		
		}
		
		/*for(j = 0; j < h; ++j){
			printf("	");

			for(i = 0; i < h / 2; ++i){
				printf("x");
			}
		} */
		
		printf("\n");
		
		
		for(i = 0; i < h * 2; ++i){
			printf("x");
		} 
	    
	} else{
		system("color 4");
		printf("Comando invalido!");
	}
    
    return 0;
}

