#include <stdio.h>
 
int main() {
 
    int x, y, sum;
    
    while(scanf("%d %d", &x, &y)){
    	
    	sum = 0;
    	
    	if(x <= 0 || y <= 0)	break;
    	
        else if(x > y){
        	for(y; y <= x; ++y){
	        	printf("%d ", y);
	        	sum += y;
	    	}
		}
		
		else{
			for(x; x <= y; ++x){
	        	printf("%d ", x);
	        	sum += x;
	    	}
		}
        printf("Sum=%d\n", sum);
    }
 
    return 0;
}
