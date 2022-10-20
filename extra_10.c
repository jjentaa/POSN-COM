#include <stdio.h>

int main(){
    int row;
    scanf("%d", &row);

    for(int i=0; i<row; i++){
        for(int j=0; j<row-1-i; j++){
            printf(" ");
        }
        for(int k=0; k<(2*i)+1; k++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}