#include <stdio.h>
#include <string.h>

int main() {
    long long int rep, i;
    scanf("%lli", &rep);
    
    for (i = 0; i < rep; ++i) {
        char x[1000], y[1000];
        scanf("%s %s", x, y);
        
        int lenX = strlen(x);
        int lenY = strlen(y);

        if (lenX >= lenY && strcmp(&x[lenX - lenY], y) == 0) {
            printf("encaixa\n");
        } else {
            printf("nao encaixa\n");
        }
    }

    return 0;
}

