#include <stdio.h>

int main(){
    int row;
    scanf("%d", &row);

    for(int a=0; a<row; a++){
        for(int c=0; c<a; c++){
            printf(" ");
        }
        printf("\\");
        for(int b=0; b<(row-a-1)*2; b++){
            printf(" ");
        }
        printf("/");
        printf("\n");
    }

    return 0;
}