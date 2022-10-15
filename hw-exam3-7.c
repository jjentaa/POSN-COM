#include <stdio.h>

int main(){
    int j, n=0;
    int counter = 0;
    while(1){
        printf("Enter num : ");
        scanf("%d", &j);
        if(j != 0){
            if(j%5==0){
                counter++;
            }
            n++;
        }
        else{
            break;
        }
    }
    if(counter>0){
        printf("Count Div 5 : %d", counter);
    }
    else{
        printf("None");
    }

    return 0;
}