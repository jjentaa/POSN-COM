#include <stdio.h>

int main(){
    int mat[3][2];
    int new_mat[3][2];


    for(int i=0; i<3; i++){
        for(int j=0; j<2; j++){
            printf("Enter num of row(%d) col(%d) : ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    for(int b=0; b<3; b++){
        for(int c=0; c<2; c++){
            printf("%d " , mat[b][c]);
        }
        printf("\n");
    }

    printf("--------------------\n");

    for(int b=0; b<3; b++){
        for(int c=0; c<2; c++){
            new_mat[b][c] = mat[c][b];
            printf("%d " , new_mat[b][c]);
        }
        printf("\n");
    }


    return 0;
}