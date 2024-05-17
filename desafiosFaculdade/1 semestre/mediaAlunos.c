#include <stdio.h>

int main() {
    int qtdAluno, i, qtdDisciplina, j;
    float nota, media, listaMedia[10000];
    
    printf("Digite a quantidade de alunos: ");
    scanf("%d", &qtdAluno);
    
    for(i = 0; i < qtdAluno; ++i) {
        
        qtdDisciplina = 0;
        media = 0; 
        
        printf("\n ~ ALUNO NUMERO #%d ~\n", i + 1);
        
        printf("\nDigite o total de disciplinas do 2o semestre: ");
        scanf("%d", &qtdDisciplina);
        
        for(j = 0; j < qtdDisciplina; ++j) {
            printf("Digite a nota da materia: ");
            scanf("%f", &nota);
            media = media + nota;
        }
        media = media / qtdDisciplina;
        listaMedia[i] = media;
    }
    
    system("cls");
    
    for(i = 0; i < qtdAluno; ++i) {
        printf("- A nota do aluno #%d eh igual a: %.1f \n", i + 1, listaMedia[i]);
    }
    
    return 0;
}

