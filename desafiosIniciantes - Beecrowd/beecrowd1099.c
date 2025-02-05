#include <stdio.h>

int main() {

    int n, x, y, i;
    
    scanf("%d", &n);
    
    for(i = 0; i < n; ++i){
        scanf("%d %d", &x, &y);
        int sum = 0;
        int x2 = 0;
        
        if(x > y){
            int test = x;
            x = y;
            y = test;
        }
        
        for(int j = x + 1; j < y; ++j){
            if(j % 2 != 0)
                sum += j;
        }
        
        printf("%d\n", sum);
    }

    return 0;
}
