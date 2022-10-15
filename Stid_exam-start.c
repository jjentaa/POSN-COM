#include <stdio.h>

int main(){

    for(int i=0; i<5; i++){
        for(int j=0; j<i+1; j++){
            printf("*");
        }
        printf("\n");
    }

    for(int i=0; i<5; i++){
        for(int j=0; j<i+1; j++){
            printf("%d", i+1);
        }
        printf("\n");
    }

    for(int i=0; i<5; i++){
        for(int j=0; j<i+1; j++){
            printf("%d", j+1);
        }
        printf("\n");
    }

    return 0;

}