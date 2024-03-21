#include <stdio.h>

int main(){
	
	//variáveis
	float distanciaPercorrida, tempo, velocidadeMedia;
	
	//menu
	printf("----------------------------------"
	"\n--------VELOCIDADE MEDIA---------"
	"\n----------------------------------\n"
	);
	
	//entrada de dds
	printf("\nInsira a distancia percorrida (em KM): ");
	scanf("%f", &distanciaPercorrida);
	
	printf("Insira o tempo (em hora): ");
	scanf("%f", &tempo);
	
	//processamento
	velocidadeMedia = distanciaPercorrida / tempo;
	
	//saída de dados
	printf("\nA velocidade media (VM) eh igual a: %.2f km/h ", velocidadeMedia);
	return 0;
}

