/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    double A, B, C, temp, expr, test;

    scanf("%lf %lf %lf", &A, &B, &C);

    // Ordenação em ordem decrescente
    if (A < B) { temp = A; A = B; B = temp; }
    if (A < C) { temp = A; A = C; C = temp; }
    if (B < C) { temp = B; B = C; C = temp; }
    
    test = A * A;
    expr = (B * B) + (C * C);
    
    if(A >= B + C) {  printf("NAO FORMA TRIANGULO\n");  }
    else if(test == expr) {  printf("TRIANGULO RETANGULO\n"); }
    else if(test > expr){ printf("TRIANGULO OBTUSANGULO\n"); }
    else if(test < expr){ printf("TRIANGULO ACUTANGULO\n"); }
    
    if(A == B && B == C){ printf("TRIANGULO EQUILATERO\n"); }
    else if(A == B || B == C || A == C){ printf("TRIANGULO ISOSCELES\n");  }
    
    return 0;
}