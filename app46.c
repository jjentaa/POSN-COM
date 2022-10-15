#include <stdio.h>

int main(){
    int col, k=0;
    printf("Enter a number : ");
    scanf("%d", &col);

    if(col<=200){
        printf("Invalid Input");
    }
    else{
        for(int i=0; i<col; i++){
            for(int j=0; j<i+1; j++){
                printf("%c", (k%65)+65);
                k++;
            }
            printf("\n");
        }
    }

    return 0;
}