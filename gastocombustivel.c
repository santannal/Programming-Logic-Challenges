#include <stdio.h>
 
int main() {
 
    int vm, tempo;
    float distancia, litros;
    
    scanf("%i", &tempo);
    scanf("%i", &vm);
    
    distancia = vm * tempo;
    litros = distancia / 12;
    
    printf("%.3f\n", litros);
    
    return 0;
}
