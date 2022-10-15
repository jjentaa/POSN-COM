#include <stdio.h>

int main(){
    int i, j;
    printf("Enter 2 num : ");
    scanf("%d %d", &i, &j);

    for(int u=1; u<=1000; u++){
        if((u%i == 0)&&(u%j == 0)){
            printf("%d\n", u);
        }
    }

    return 0;
}