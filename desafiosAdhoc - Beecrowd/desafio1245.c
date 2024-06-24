#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, n, j;
    
    while (scanf("%d", &n) != EOF) {
    	if(n == 0)	break;
    	
        int vetorT[n];
        char pe[n];
        int cont = 0;

        for (i = 0; i < n; ++i) {
            scanf("%d %c", &vetorT[i], &pe[i]);
        }

        for (i = 0; i < n; ++i) { 
                for (j = i + 1; j < n; ++j) {
                    if (vetorT[i] == vetorT[j] && pe[i] != pe[j]){
                        cont++;
                        vetorT[i] = rand();
                        vetorT[j] = rand();
                        pe[j] = 'N';
                        pe[i] = 'N';
                        break;
                    }
                }
            }

        printf("%d\n", cont);
    }

    return 0;
}

