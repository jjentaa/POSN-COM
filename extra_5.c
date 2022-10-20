#include <stdio.h>

int main(){
    int row;
    scanf("%d", &row);

    for(int a=0; a<row; a++){
        for(int b=0; b<row-1-a; b++){
            printf(" ");
        }
        printf("/");
        for(int c=0; c<a*2; c++){
            printf(" ");
        }
        printf("\\");
        printf("\n");
    }

    return 0;
}