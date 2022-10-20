#include <stdio.h>

int main(){
    int row;
    scanf("%d", &row);

    int add = row-3;

    for(int a=0; a<row-1; a++){
        for(int b=0; b<a; b++){
            printf(" ");
        }
        printf("%c", (row-a-1)+65);
        for(int c=0; c<((row+add)-(2*a)); c++){
            printf(" ");
        }
        printf("%c", (row-a-1)+65);
        for(int d=0; d<a*2; d++){
            printf(" ");
        }
        printf("%d", row-a);
        for(int e=0; e<((row+add)-(2*a)); e++){
            printf(" ");
        }
        printf("%d", row-a);
        printf("\n");
    }

    for(int j=0; j<row-1; j++){
        printf(" ");
    }
    printf("A");
    for(int k=0; k<(row-1)*2; k++){
        printf(" ");
    }
    printf("1\n");

    for(int f=row-2; f>=0; f--){
        for(int g=0; g<f; g++){
            printf(" ");
        }
        printf("%c", (row-f-1)+65);
        for(int h=0; h<((row+add)-(2*f)); h++){
            printf(" ");
        }
        printf("%c", (row-f-1)+65);
        for(int i=0; i<f*2; i++){
            printf(" ");
        }
        printf("%d", row-f);
        for(int j=0; j<((row+add)-(2*f)); j++){
            printf(" ");
        }
        printf("%d", row-f);
        printf("\n");
    }

    return 0;
}