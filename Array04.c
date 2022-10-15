#include <stdio.h>

int main(){
    int mat[3][3];
    int sq_mat[3][3];
    int n;
    int i=0, j=0, counter=0;

    while(counter<9){
        printf("Enter num in col:%d row%d : ", j, i);
        scanf("%d", &mat[i][j]);
        if(mat[i][j]>=0 && mat[i][j]<=100){
            counter++;
            sq_mat[i][j]=mat[i][j]*mat[i][j];
            if(j<2){
                j++;
            }
            else{
                i++;
                j=0;
            }
        }
    }

    printf("---------------------\n");
    
    for(int k=0; k<3; k++){
        for(int l=0; l<3; l++){
            printf("%d ", mat[k][l]);
        }
        printf("\n");
    }

    printf("---------------------\n");

    for(int m=0; m<3; m++){
        for(int n=0; n<3; n++){
            printf("%d ", sq_mat[m][n]);
        }
        printf("\n");
    }

    return 0;
}