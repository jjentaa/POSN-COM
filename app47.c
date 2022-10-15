#include <stdio.h>

int main(){
    int col;
    printf("Enter : ");
    scanf("%d", &col);

    for(int i=0; i<col; i++){
        for(int j=0; j<(col-i-1); j++){
            printf(" ");
        }
        for(int k=i; k>0; k--){
            printf("%d", k);
        }
        printf("0");
        for(int l=1; l<i+1; l++){
            printf("%d", l);
        }
        printf("\n");
    }

    return 0;
}