#include <stdio.h>

int main(){
    int arr[10];
    int i, j;

    for(int a=0; a<10; a++){
        printf("Enter num : ");
        scanf("%d", &arr[a]);
    }

    for(int b=0; b<10; b++){
        printf("%d ", arr[b]);
    }

    printf("\n---------------\n");

    for(int i=0; i<9; i++){
        for(int j=i; j<10; j++){
            if(arr[i]>arr[j]){
                int t = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
            }
        }
    }

    for(int k=0; k<10; k++){
        printf("%d ", arr[k]);
    }

    return 0;
}