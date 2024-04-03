#include <stdio.h>
 
int main() {
 
    float a, b, c, triretangulo, circulo, trapezio, quadrado, retangulo;
    
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    
    triretangulo = a * c / 2;
    printf("TRIANGULO: %.3f\n", triretangulo);
    
    circulo = 3.14159 * (c * c);
    printf("CIRCULO: %.3f\n", circulo);
    
    trapezio = (a + b) * c / 2;
    printf("TRAPEZIO: %.3f\n", trapezio);
    
    quadrado = b * b;
    printf("QUADRADO: %.3f\n", quadrado);
    
    retangulo = a * b;
    printf("RETANGULO: %.3f\n", retangulo);
 
    return 0;
}
