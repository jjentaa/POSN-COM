#include <stdio.h>

int main(){
    int col;
    printf("Enter : ");
    scanf("%d", &col);

    for(int i=0; i<col; i++){
        for(int j=0; j<i; j++){
            printf(" ");
        }
        printf("\\");
        for(int k=0; k<((col-i-1)*2); k++){
            printf(" ");
        }
        printf("/");

        printf("\n");
    }

    return 0;
}