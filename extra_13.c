#include <stdio.h>

int main(){
    int arr[5];
    scanf("%d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);

    for(int i=0; i<5; i++){
        if(i==2){
            for(int j=0; j<5; j++){
                printf("%d ", arr[(i+j)%5]);
            }
        }
        else{
            for(int k=0; k<2; k++){
                printf("  ");
            }
            printf("%d ", arr[(i+2)%5]);
            for(int l=0; l<2; l++){
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}