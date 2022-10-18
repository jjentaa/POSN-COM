#include <stdio.h>

int main(){
    int n;
    printf("Input the number of elements : ");
    scanf("%d", &n);

    int arr[n];
    int *p=arr;
    printf("Input %d number of elementd in the array : \n", n);
    for(int a=0; a<n; a++){
        printf("\telelment - %d : ", a+1);
        scanf("%d", &*(p+a));
    }

    int temp;
    for(int i=0; i<n-1; i++){
        for(int j=i; j<n; j++){
            if(*(p+i) > *(p+j)){
                temp = *(p+j);
                *(p+j) = *(p+i);
                *(p+i) = temp;
            }
        }
    }

    printf("The elements in the array after sorting : \n");
    for(int b=0; b<n; b++){
        printf("\telement - %d : %d\n", b+1, *(p+b));
    }

    return 0;
}