#include <stdio.h>

int main(){
    int day, m, n;
    n = 0;
    printf("Enter 1st day : ");
    scanf("%d", &day);

    printf("Enter number of day in month : ");
    scanf("%d", &m);

    for(int t=0; t<4; t++){
        for(int i=0; i<day-1; i++){
            printf(" \t");
            n++;
        }

        for(int j=1; j<=m; j++){
            if(n%7 == 0){
                printf("\n");
            }
            printf("%d\t", j);
            n++;
        }

        printf("\n");

        day = (n%7)+1;
        n = 0;
    }

    return 0;
}