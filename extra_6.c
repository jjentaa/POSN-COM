#include <stdio.h>

int main(){
    int direct, row;
    scanf("%d", &direct);
    scanf("%d", &row);

    if(direct==1){
        for(int a=0; a<row; a++){
            for(int b=0; b<row-1-a; b++){
                printf(" ");
            }
            printf("/");
            printf("\n");
        }

        for(int c=0; c<row; c++){
            for(int d=0; d<c; d++){
                printf(" ");
            }
            printf("\\");
            printf("\n");
        }
    }

    else{
        for(int a=0; a<row; a++){
            for(int b=0; b<a; b++){
                printf(" ");
            }
            printf("\\");
            printf("\n");
        }

        for(int c=0; c<row; c++){
            for(int d=0; d<row-1-c; d++){
                printf(" ");
            }
            printf("/");
            printf("\n");
        }
    }

    return 0;
}