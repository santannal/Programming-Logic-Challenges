#include <stdio.h>
 
int main() {
 
    int n, v, t;
    
    while(scanf("%i %i", &v, &t) != EOF){
        t = t * 2;
        n = t * v;
        printf("%i\n", n);
    }
 
    return 0;
}
