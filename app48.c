#include <stdio.h>

int main(){
    int col;
    printf("Enter : ");
    scanf("%d", &col);

    for(int i=0; i<col; i++){
        for(int j=0; j<(col-i-1); j++){
            printf(" ");
        }
        for(int k=1; k<=i+1; k++){
            printf("%d", k);
        }
        for(int l=i; l>=1; l--){
            printf("%d", l);
        }
        printf("\n");
    }

    return 0;
}