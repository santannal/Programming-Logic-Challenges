#include <stdio.h>
#include<stdbool.h>

void VoaOuNao(float peso, float comprimentoPista, float velocidadeVento, float altitude, float calculo, bool testeVento, bool testeComprimento, bool testeAltitude, bool testePeso){
	
	printf("|\n|Resposta: ");

	
	if(peso <= 150000){
		testePeso = true;
	} else{
		testePeso = false;
	}
	
	if(peso <= 150000 && peso >= 100000){
		if(comprimentoPista  >= 2000){
			testeComprimento = true;
		} else{
			testeComprimento = false;
		}
	} else{
		if(comprimentoPista >= 1500){
			testeComprimento = true;
		} else{
			testeComprimento = false;
		}
	}
	
	if(velocidadeVento <= 30){
		testeVento = true;
	} else{
		testeVento = false;
	}
	
	if(altitude > 1000){
		testeAltitude = false;
	} else{
		testeAltitude = true;
	}



	//printf("%d %d %d %d", testePeso, testeComprimento, testeVento, testeAltitude);
	
	if(testeVento == false && testeComprimento == false && testeAltitude == true && testePeso == false){
		printf("O aviao nao pode decolar, pois a valocidade do vento, comprimento da pista e peso do aviao sao inadequados.");
		}  else{
			if(testeVento == false && testeComprimento == true && testeAltitude == false && testePeso == false){
				printf("O aviao nao pode decolar, pois a valocidade do vento, altitude e peso do aviao sao inadequados.");
				if(peso < 100000){
				altitude = altitude - 1000;
				calculo = 1500 + altitude;
			}
				else{
				altitude = altitude - 1000;
				calculo = 2000 + altitude;
				}
				printf("\n|Eh necessario adicionar %.0f metros de pista ao tamanho minimo, chegando no valor de: %.0f para adequar com a altitude\n|", altitude, calculo); 
				} else{
				if(testeVento == false && testeComprimento == false && testeAltitude == false && testePeso == false){
					printf("O aviao nao pode decolar, pois todas as condições sao inadequadas");
					if(peso < 100000){
					altitude = altitude - 1000;
					calculo = 1500 + altitude;
					}else{
					altitude = altitude - 1000;
					calculo = 2000 + altitude;
					}
					printf("\n|Eh necessario adicionar %.0f metros de pista ao tamanho minimo, chegando no valor de: %.0f para adequar com a altitude\n|", altitude, calculo); 
				} else{
					if(testeVento == false && testeComprimento == false && testeAltitude == false && testePeso == true){
						printf("O aviao nao pode decolar, pois a velocidade do vento, comprimento da pista e altitude sao inadequados para voar.");
						if(peso < 100000){
							altitude = altitude - 1000;
							calculo = 1500 + altitude;
							}else{
							altitude = altitude - 1000;
							calculo = 2000 + altitude;
							}
				printf("\n|Eh necessario adicionar %.0f metros de pista ao tamanho minimo, chegando no valor de: %.0f para adequar com a altitude\n|", altitude, calculo); 
					} else{
						if(testeVento == false && testeComprimento == false && testeAltitude == true && testePeso == true){
							printf("O aviao nao pode decolar, pois a velocidade do vento e o comprimento da pista sao inadequados para voar.");
						} else{
							if(testeVento == false && testeComprimento == true && testeAltitude == true && testePeso == true){
								printf("O aviao nao pode decolar, pois a velocidade do vento eh inadequada para voar.");
							} else{
								if(testeVento == true && testeComprimento == false && testeAltitude == false && testePeso == false){
									printf("O aviao nao pode decolar, pois o comprimento da pista, altitude e peso do aviao sao inadequados.");
								if(peso < 100000){
												altitude = altitude - 1000;
												calculo = 1500 + altitude;
												}else{
												altitude = altitude - 1000;
												calculo = 2000 + altitude;
												}
												printf("\n|Eh necessario adicionar %.0f metros de pista ao tamanho minimo, chegando no valor de: %.0f para adequar com a altitude\n|", altitude, calculo); 
								} else{
									if(testeVento == true && testeComprimento == true && testeAltitude == false && testePeso == false){
										printf("O aviao nao pode decolar, pois a altitude e o peso do aviao sao inadequados.");
										if(peso < 100000){
												altitude = altitude - 1000;
												calculo = 1500 + altitude;
												}else{
												altitude = altitude - 1000;
												calculo = 2000 + altitude;
												}
												printf("|Eh necessario adicionar %.0f metros de pista ao tamanho minimo, chegando no valor de: %.0f para adequar com a altitude\n|", altitude, calculo); 
									} else{
										if(testeVento == true && testeComprimento == true && testeAltitude == true && testePeso == false){
											printf("O aviao nao pode decolar, pois o peso do aviao eh inadequado.");
										} else{
											if(testeVento == false && testeComprimento == true && testeAltitude == true && testePeso == false){
												printf("O aviao nao pode decolar, pois a velocidade do vento e o peso do aviao sao inadequados.");
											}else{
												if(testeVento == true && testeComprimento == false && testeAltitude == false && testePeso == true){
													printf("O aviao nao pode decolar, pois o comprimento da pista e a altitude sao inadequados.");
													if(peso < 100000){
														altitude = altitude - 1000;
														calculo = 1500 + altitude;
														}else{
														altitude = altitude - 1000;
														calculo = 2000 + altitude;
														}
														printf("\n|Eh necessario adicionar %.0f metros de pista ao tamanho minimo, chegando no valor de: %.0f para adequar com a altitude\n|", altitude, calculo); 
												} else{
													if(testeVento == true && testeComprimento == false && testeAltitude == true && testePeso == true){
														printf("O aviao nao pode decolar, pois o comprimento da pista eh inadequado.");
													} else{
														if(testeVento == true && testeComprimento == true && testeAltitude == false && testePeso == true){
															if(peso < 100000){
																altitude = altitude - 1000;
																calculo = 1500 + altitude;
																}else{
																altitude = altitude - 1000;
																calculo = 2000 + altitude;
																}
																printf("\n|Eh necessario adicionar %.0f metros de pista ao tamanho minimo, chegando no valor de: %.0f para adequar com a altitude\n|", altitude, calculo); 
														} else{
															if(testeVento == true && testeComprimento == false && testeAltitude == true && testePeso == false){
																printf("O aviao nao pode decolar, pois o comprimento da pista e o peso eh inadequado.\n");
															} else{
																if(testeVento == false && testeComprimento == true && testeAltitude == false && testePeso == true){
																	printf("O aviao nao pode decolar, pois a velocidade do vento e a altitude sao inadequados.\n");
																	if(peso < 100000){
																		altitude = altitude - 1000;
																		calculo = 1500 + altitude;
																		}else{
																		altitude = altitude - 1000;
																		calculo = 2000 + altitude;
																		}
																printf("\n|Eh necessario adicionar %.0f metros de pista ao tamanho minimo, chegando no valor de: %.0f para adequar com a altitude\n|", altitude, calculo); 	
																} else{
															printf("O aviao pode decolar.\n|");
														}
												}
											}
											}
										}
									}
								}
						}
					}
				}
			}
		}
	}
							}
						}
					}
				



int main(){
	
	//variaveis
	float peso, comprimentoPista, velocidadeVento, altitude, calculo = 0;
	int escolha = 1;
	bool testeVento, testeComprimento, testeAltitude, testePeso;
	
	//functions
	float VoaOuNaoVoa;
	
	system("color FD");
	
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
	
	printf("\n|Insira o peso do aviao (em kg): ");
	scanf("%f", &peso);
	printf("|Insira o comprimento da pista (em metros): ");
	scanf("%f", &comprimentoPista);
	printf("|Insira a velocidade do vento (em km/h): ");
	scanf("%f", &velocidadeVento);
	printf("|Insira a altitude do aeroporto: ");
	scanf("%f", &altitude);
	
	VoaOuNao(peso, comprimentoPista, velocidadeVento, altitude, calculo, testeVento, testeComprimento, testeAltitude, testePeso);
	
	printf("\n|\n|\n|Desejas iniciar um caso de teste? \n");
	printf("|[0] Nao;\n");
	printf("|[1] Sim.\n");
	printf("|Escolha: ");
	
	}
	
	return 0;
}
