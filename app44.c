#include <stdio.h>

int main(){
    int col;
    printf("Enter num : ");
    scanf("%d", &col);

    if(col<1){
        printf("Invalid Input");
    }
    else{
        for(int i=0; i<col; i++){
            for(int j=0; j< i+1; j++){
                printf("%d ", (i+1)*(j+1));
            }
            printf("\n");
        }
    }

    return 0;
}