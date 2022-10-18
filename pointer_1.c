#include <stdio.h>

int main(){
    int n;
    printf("Input the number of elements max : ");
    scanf("%d", &n);
    int arr[n], total=0;
    int* p=arr;
    printf("Input %d number of elements in the array : \n", n);
    for(int i=0; i<n; i++){
        printf("\telement - %d : ", i+1);
        scanf("%d", &*(p+i));
        total += *(p+i);
    }
    printf("The sum of array is : %d", total);



    return 0;
}