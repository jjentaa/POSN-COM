#include <stdio.h>

int main(){
    int n;
    printf("Input the number of elements max 15) : ");
    scanf("%d", &n);

    int arr[n];
    int *p=arr;
    printf("Input %d number of elementd in the array : \n", n);
    for(int i=0; i<n; i++){
        printf("\telelment - %d : ", i+1);
        scanf("%d", &*(p+i));
    }

    printf("The elements of array in reverse order are: \n");
    for(int j=n-1; j>=0; j--){
        printf("\telement - %d : %d\n", j+1, *(p+j));
    }

    return 0;
}