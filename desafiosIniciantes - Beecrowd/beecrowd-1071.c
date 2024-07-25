#include <stdio.h>
 
int main() {
 
    long long int x, y, sum=0;
    

    scanf("%lld", &x);
    scanf("%lld", &y);

    for(y = y + 1; y < x; ++y){
        if(y % 2 != 0)
            sum += y;
    }
    
    printf("%lld\n", sum);
 
    return 0;
}
