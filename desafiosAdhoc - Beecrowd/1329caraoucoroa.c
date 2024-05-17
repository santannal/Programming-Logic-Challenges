#include <stdio.h>
 
int main() {
 
    int times, contM, contJ, i, play;
    
    while(scanf("%d", &times)){
    	if(times == 0)  break;
        contM = 0;
        contJ = 0;
        for(i = 0; i < times; ++i){
            play = 0;
            scanf("%d", &play);
            if(play == 0)
                ++contM;
            else
                ++contJ;
        }
        
        printf("Mary won %i times and John won %i times\n", contM, contJ);
    }
        
    
 
    return 0;
}
