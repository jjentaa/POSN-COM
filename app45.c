#include <stdio.h>

int main(){
    int col;
    printf("Enter num : ");
    scanf("%d", &col);
    if(col<27){
        printf("Invalid Input");
    }
    else{
        for(int i=0; i<col; i++){
            for(int j=0; j< i+1; j++){
                printf("%c", j+65);
            }
            printf("\n");
        }
    }

    return 0;
}