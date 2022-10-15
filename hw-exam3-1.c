#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    int t;
    int i = 0 ;
    int r1=0, r2=0, r3=0, r4=0, r5=0, r6=0, r7=0, r8=0;
    printf("Enter N=");
    scanf("%d", &t);

    do{
        int y = t%2;
        t = floor(t/2);
        printf("%d\n", y);
        i++;
        switch(i){
            case 0:
                r8 = y;
                break;
            case 1:
                r7 = y;
                break;
            case 2:
                r6 = y;
                break;
            case 3:
                r5 = y;
                break;
            case 4:
                r4 = y;
                break;
            case 5:
                r3 = y;
                break;
            case 6:
                r2 = y;
                break;
            case 7:
                r1 = y;
                break;
        }
    }
    while (t>0);
    
    printf("%d%d%d%d%d%d%d", r1, r2, r3, r4, r5, r6, r7);


    return 0;
}