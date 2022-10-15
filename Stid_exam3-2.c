#include <stdio.h>

int main(){
    int j, n=0;
    float avg;
    while(1){
        printf("Enter num : ");
        scanf("%d", &j);
        if(j != -99){
            avg += j;
            n++;
        }
        else{
            break;
        }
    }
    printf("%f", avg/n);

    return 0;
}