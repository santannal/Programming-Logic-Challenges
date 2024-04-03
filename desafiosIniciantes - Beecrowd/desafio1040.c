#include <stdio.h>
 
int main() {
 
    float n1, n2, n3, n4, media;
    
    scanf("%f", &n1);
    scanf("%f", &n2);
    scanf("%f", &n3);
    scanf("%f", &n4);
    
    media = ((n1 * 2) + (n2 * 3) + (n3 * 4) + n4) / (2 + 3 + 4 + 1);
    printf("Media: %.1f\n", media);
    
    if(media >= 7){
        printf("Aluno aprovado.\n");
    } else{
        if(media < 5){
            printf("Aluno reprovado.\n");
        } else{
            printf("Aluno em exame.\n");
            n1 = 0;
            scanf("%f", &n1);
            printf("Nota do exame: %.1f\n", n1);
            media = (n1 + media) / 2;
            if(media >= 5){
                printf("Aluno aprovado.\n");
                printf("Media final: %.1f\n", media);
            } else{
                printf("Aluno reprovado.\n");
                printf("Media final: %.1f\n", media);
            }
        }
    }
 
    return 0;
}
