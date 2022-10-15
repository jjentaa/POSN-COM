#include <stdio.h>

int main(){
    int i =1, nd;
    printf("Enter number end : ");
    scanf("%d", &nd);
    // while(i <=12){
    //     printf("9 x %d = %d\n", i, i*9);
    //     i++;
    // }

    while(i <= 12){
        for(int j = 2; j<=nd; j++){
            printf("%d x %d = %d\t", j, i, i*j);
        }
        printf("\n");
        i++;
    }

    return 0;
}