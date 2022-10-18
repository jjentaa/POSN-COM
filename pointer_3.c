#include <stdio.h>

int main(){
    int n1, n2;
    int *max = &n1;
    printf("Input the first number : ");
    scanf("%d", &n1);
    printf("Input the second number : ");
    scanf("%d", &n2);
    if(n2 > *max){
        max = &n2;
    }

    printf("%d is the maximum number", *max);

    return 0;
}