#include <stdio.h>

int main() {
	
    int i, j, h;

    printf("Entre com uma altura (1 a 20): ");
    scanf("%d", &h);
    
    if(h <= 20 && h > 0){
    
	    system("cls");
	    system("color 2");
	    printf("\n");
	
	    for (i = 0; i < h; ++i) {
	    	
	        for (j = 0; j < h - i - 1; ++j) {
	            printf(" ");
	        }
	
	
	        printf("*");
	
	        for (j = 0; j < i * 2; ++j) {
	            printf("*");
	        }
	        printf("\n");
	    }
	
		for(j = 0; j < h; ++j){
		    for (i = 0; i <= h - 2; ++i) {
		        printf(" ");
		    }
		    printf("*\n");
		}
	} else{
		system("color 4");
		printf("Comando invalido!");
	}
    
    return 0;
}

