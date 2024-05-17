#include <stdio.h>
 
int main() {
 
    int n1, n2;
    
    scanf("%d", &n1);
    scanf("%d", &n2);
    
    if(n1 == 1 && n2 == 0)
        printf("B\n");
    else if(n1 == 0)
        printf("C\n");
    else
        printf("A\n");
 
    return 0;
}
