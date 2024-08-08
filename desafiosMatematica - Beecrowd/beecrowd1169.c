#include <stdio.h>
#include <math.h>

void conversion(long long int qtdCasas) {
    double kilo = 0;
    double sum = 1;

    sum = pow(2, qtdCasas);

    kilo = trunc(sum / 12000);
    printf("%.0lf kg\n", kilo); 
}

int main() {
    long long int qtdCasas, i;

    scanf("%lld", &i);

    while (i > 0) {
        scanf("%lld", &qtdCasas);
        conversion(qtdCasas);
        --i;
    }

    return 0;
}

