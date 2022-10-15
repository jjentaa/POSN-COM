#include <stdio.h>

int main(){
    int arr[10];

    for(int i=0; i<10; i++){
        printf("Input %d : ", i);
        scanf("%d", &arr[i]);
    }
    printf("Element\tvalue\tHistogram\n");
    for(int j=0; j<10; j++){
        printf("%d\t%d\t", j, arr[j]);
        for(int k=0; k<arr[j]; k++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}