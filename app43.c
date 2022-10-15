#include <stdio.h>

int main(){
    int i, j=10, l=0, k=0;
    printf("Enter number : ");
    scanf("%d", &i);

    while(j<=i*10){
        printf("%d", i%10);
        i /= 10;
    }
    return 0;
}