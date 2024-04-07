#include <stdio.h>

void VoaOuNao(float peso, float comprimentoPista, float velocidadeVento, float altitude, float calculo){
	
	printf("|\n|Resposta: ");
	if(altitude <= 1000){

		if(velocidadeVento > 30){
			printf("O aviao nao pode decolar devido a alta velocidade do vento.\n");
		} else{
			if(peso <= 100000){
				if(comprimentoPista >= 1500){
					printf("O aviao pode decolar.");
				} else{
					printf("O aviao nao pode decolar devido ao comprimento insuficiente da pista.\n");
				}
			} else{
				if(peso > 100000 && peso < 150000){
					if(comprimentoPista >= 2000){
						printf("O aviao pode decolar.");
					} else{
						printf("O aviao nao pode decolar devido ao comprimento insuficiente da pista.\n");
					}
				} else{
					printf("O aviao nao pode decola devido ao peso limite atingido.\n");
				}
			}
		}
	} else{
		altitude = altitude - 1000;
		calculo = 1500 + altitude;
		printf("Eh necessario adicionar %.0f metros de pista ao tamanho minimo, chegando no valor de: %.0f\n", altitude, calculo);
	}
}


int main(){
	
	//variaveis
	float peso, comprimentoPista, velocidadeVento, altitude, calculo;
	int escolha = 1;
	
	//functions
	float VoaOuNaoVoa;
	
	system("color 02");
	
	printf("|Desejas iniciar um caso de teste? \n");
	printf("|[0] Nao;\n");
	printf("|[1] Sim.\n");
	printf("|Escolha: ");
	while(scanf("%d", &escolha)){
	system("cls");
	if(!escolha)  break;
	printf("=============================================\n");
	printf("==============SANTANNA AIRPORT===============\n");
	printf("=============================================\n");
	
	printf("\n|Insira o peso do aviao: ");
	scanf("%f", &peso);
	printf("|Insira o comprimento da pista: ");
	scanf("%f", &comprimentoPista);
	printf("|Insira a velocidade do vento: ");
	scanf("%f", &velocidadeVento);
	printf("|Insira a altitude do aeroporto: ");
	scanf("%f", &altitude);
	
	VoaOuNao(peso, comprimentoPista, velocidadeVento, altitude, calculo);
	
	printf("|\n|\n|Desejas iniciar um caso de teste? \n");
	printf("|[0] Nao;\n");
	printf("|[1] Sim.\n");
	printf("|Escolha: ");
	
	}
	
	return 0;
}
