#include <stdio.h>

int main(){
    int col;
    printf("Enter a number : ");
    scanf("%d", &col);
    // for(int i=0; i<row; i++){
    //     for(int j=0; j<4-i; j++){
    //         printf(" ");
    //     }
    //     for(int k=0; k<i+1; k++){
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    // for(int i=0; i< col; i++){
    //     for(int j=0; j<col-i-1; j++){
    //         printf(" ");
    //     }
    //     for(int k=0; k<(2*i)+1; k++){
    //         printf("*");
    //     }
    //     for(int l=0; l<col-i-1; l++){
    //         printf(" ");
    //     }
    //     printf("\n");
    // }

    for(int i=0; i< col; i++){
        for(int j=0; j<col-i-1; j++){
            printf(" ");
        }
        for(int k=0; k<(2*i)+1; k++){
            printf("*");
        }
        for(int l=0; l<col-i-1; l++){
            printf(" ");
        }
        printf("\n");
    }
    for(int m=0; m<col-1; m++){
        for(int n=0; n<m; m++){
            printf(" ");
        }
        for(int o=0; o<col-2-(m*2); o++){
            printf("*");
        }
        for(int p=0; p<m; p++){
            printf(" ");
        }
        printf("\n");
    }

    return 0;
}