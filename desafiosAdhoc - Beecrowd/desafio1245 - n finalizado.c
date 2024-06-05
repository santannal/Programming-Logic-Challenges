#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, n, j, cont;
    int *vetorT;
    char *pe;
    
    while (scanf("%d", &n) != EOF) {
        vetorT = (int *)malloc(n * sizeof(int));
        pe = (char *)malloc(n * sizeof(char));
        cont = 0;

        for (i = 0; i < n; ++i) {
            scanf("%d %c", &vetorT[i], &pe[i]);
        }

        for (i = 0; i < n; ++i) { 
                for (j = i + 1; j < n; ++j) {
                    if (vetorT[i] == vetorT[j] && pe[i] != pe[j]){
                        cont += 1;
                        break;
                    }
                }
            }

        printf("%d\n", cont);
    }

    return 0;
}

