#include <stdio.h>

int main(){
    int total[3][2];
    int mat[2][3][2];


    for(int m=0; m<2; m++){
        for(int i=0; i<3; i++){
            for(int j=0; j<2; j++){
                printf("Enter num of mat%d row(%d) col(%d) : ", m+1, i, j);
                scanf("%d", &mat[m][i][j]);
            }
        }
    }

    for(int k=0; k<3; k++){
        for(int l=0; l<2; l++){
            for(int n=0; n<2; n++){
                printf("%d" , mat[l][k][n]);
            }
            if(k==1 && l==0){
                printf("\t+\t");
            }
            else{
                printf("\t \t");
            }
        }
        printf("\n");
    }

    printf("Result :\n");

    for(int b=0; b<3; b++){
        for(int c=0; c<2; c++){
            total[b][c] = mat[0][b][c]+mat[1][b][c];
            printf("%d " , total[b][c]);
        }
        printf("\n");
    }

    printf("---------------------------\n");

    return 0;
}