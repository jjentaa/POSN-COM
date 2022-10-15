#include <stdio.h>
#include <stdbool.h>

int main(){

    int counter=0, i1, i2, i3, i4, i5;

    printf("Enter num : ");
    scanf("%d", &i1);
    if(i1%2 ==1){
        counter++;
    }

    printf("Enter num : ");
    scanf("%d", &i2);
    if(i2%2 ==1){
        counter++;
    }

    printf("Enter num : ");
    scanf("%d", &i3);
    if(i1%3 ==1){
        counter++;
    }

    printf("Enter num : ");
    scanf("%d", &i4);
    if(i4%2 ==1){
        counter++;
    }

    printf("Enter num : ");
    scanf("%d", &i5);
    if(i5%2 ==1){
        counter++;
    }

    printf("Odd = %d", counter);
    printf("\nEven = %d", 5-counter);
    
    return 0;
}