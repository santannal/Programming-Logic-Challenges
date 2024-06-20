#include <stdio.h>
#include <stdbool.h>

void estacionarCarro(char vagas[15][15], int vagasNumeros[15][15], int *vagasDisponiveis, int *totalCarros, int carrosPorDia[1000], int diaAtual) {
    int i, j;
    bool vagaEncontrada = false;
    for (i = 0; i < 15; ++i) {
        for (j = 0; j < 15; ++j) {
            if (vagas[i][j] != 'Z') {
                printf("\n|Sua Vaga: %c%i \n\n", vagas[i][j], vagasNumeros[i][j]);
                (*vagasDisponiveis)--;
                (*totalCarros)++;
                carrosPorDia[diaAtual - 1]++;
                vagas[i][j] = 'Z';
                vagasNumeros[i][j] = 1;
                vagaEncontrada = true;
                break;
            }
        }
        
        if (vagaEncontrada) {
            break;
        }
    }    
    system("pause");
    system("cls");
}

void sairVaga(char vagas[15][15], char vagasCopia[15][15], int vagasNumeros[15][15], int vagasNumerosCopia[15][15], int *ganhoDiario, int *vagasDisponiveis) {
    int i, j, numeroDaVaga;
    char letraDaVaga;
    printf("Digite sua vaga [letra/num]: ");
    scanf(" %c %i", &letraDaVaga, &numeroDaVaga);
    for (i = 0; i < 15; ++i) {
        for (j = 0; j < 15; ++j) {
            if (vagasCopia[i][j] == letraDaVaga && vagasNumerosCopia[i][j] == numeroDaVaga) {
                vagas[i][j] = letraDaVaga;
                vagasNumeros[i][j] = numeroDaVaga;
                (*ganhoDiario) += 15;
                (*vagasDisponiveis)++;
            }
        }
    }
    system("cls");
}

void iniciarNovoDia(char vagas[15][15], int vagasNumeros[15][15], int *ganhoDiario, int *vagasDisponiveis, int *diaAtual, int *ganhoTotal) {
    int i, j;
    (*diaAtual)++;
    for (i = 0; i < 15; ++i) {
        for (j = 0; j < 15; ++j) {
            if (vagas[i][j] == 'Z') {
                (*ganhoTotal) += 15;
            }
        }
    }
    
    for (i = 0; i < 15; ++i) {
        for (j = 0; j < 15; ++j) {
            vagas[i][j] = 'a' + i;
        }
    }

    for (i = 0; i < 15; ++i) {
        for (j = 0; j < 15; ++j) {
            vagasNumeros[i][j] = j;
        }
    }
    
    *ganhoDiario = 0;
    *vagasDisponiveis = 225;
    system("cls");
}

void finalizarSistema(char vagas[15][15], int *ganhoTotal, int ganhoDiario) {
    int i, j;
    for (i = 0; i < 15; ++i) {
        for (j = 0; j < 15; ++j) {
            if (vagas[i][j] == 'Z') {
                (*ganhoTotal) += 15;
            }
        }
    }
    *ganhoTotal += ganhoDiario;
}

int main() {
    int i, j, vagasNumeros[15][15], operacao, vagasDisponiveis = 225, numeroDaVaga, ganhoDiario = 0, ganhoTotal = 0, diaAtual = 1, totalCarros = 0, carrosPorDia[1000] = {0};
    char vagas[15][15], vagasCopia[15][15], letraDaVaga;
    int vagasNumerosCopia[15][15];

    for (i = 0; i < 15; ++i) {
        for (j = 0; j < 15; ++j) {
            vagas[i][j] = 'a' + i;
            vagasCopia[i][j] = vagas[i][j];
        }
    }
    
    for (i = 0; i < 15; ++i) {
        for (j = 0; j < 15; ++j) {
            vagasNumeros[i][j] = j;
            vagasNumerosCopia[i][j] = j;
        }
    }
    
    printf("======================================\n");
    printf("======== ESTACIONAMENTO FATEC ========\n");
    printf("======================================\n\n");
    
    do {
        printf("Dia #%i -\n", diaAtual);
        printf("Total de Vagas Disponiveis: %d\n", vagasDisponiveis);
        printf("Dinheiro diario arrecadado: R$ %d,00\n\n", ganhoDiario);
    
        printf("|Vagas: \n\n");
        
        for (i = 0; i < 15; ++i) {
            for (j = 0; j < 15; ++j) {
                printf("%c%i ", vagas[i][j], vagasNumeros[i][j]);
            }
            printf("\n");
        }
        
        printf("\n|OPERACOES:\n");
        printf("|[1] Estacionar;\n");
        printf("|[2] Sair;\n");
        printf("|[3] Iniciar novo dia;\n");
        printf("|[4] Finalizar o sistema;\n");
        printf("|Escolha da operacao: ");
        scanf("%d", &operacao);
        
        switch (operacao) {
            case 1:
                estacionarCarro(vagas, vagasNumeros, &vagasDisponiveis, &totalCarros, carrosPorDia, diaAtual);
                break;
            case 2:
                sairVaga(vagas, vagasCopia, vagasNumeros, vagasNumerosCopia, &ganhoDiario, &vagasDisponiveis);
                break;
            case 3:
                iniciarNovoDia(vagas, vagasNumeros, &ganhoDiario, &vagasDisponiveis, &diaAtual, &ganhoTotal);
                break;
            case 4:
                finalizarSistema(vagas, &ganhoTotal, ganhoDiario);
                break;
            default:
                printf("Operacao invalida. Digite novamente.");
                system("pause");
                system("cls");
                break;
        }
        
    } while (operacao != 4);
    
    system("cls");
    
    printf("===========================\n");
    printf("==== ANALISE DOS DADOS ====\n");
    printf("===========================\n");
    
    system("color B");

    printf("\nTotal arrecadado: R$ %d,00\n", ganhoTotal);
    printf("Total de carros estacionados: %d\n", totalCarros);
    
    int maiorEstacionamentoDia = 0;    
    
    for (i = 0; i < diaAtual; ++i) {
        if (carrosPorDia[i] > maiorEstacionamentoDia)
            maiorEstacionamentoDia = carrosPorDia[i];
    }
    
    printf("Maior numero de carros estacionados no mesmo dia: %d\n\n", maiorEstacionamentoDia);
    
    system("pause");
    
    return 0;
}

