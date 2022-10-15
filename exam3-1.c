#include <stdio.h>

int main(){
    int j, total;
    float mean;

    for(int i=0; i<10; i++){
        printf("Enter number : ");
        scanf("%d", &j);
        total += j;
    };
    mean = total/10;
    printf("%f", mean);

    return 0;
}