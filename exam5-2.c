#include <stdio.h>

int main(){
    int n, counter=0, i=2;
    printf("Enter num : ");
    scanf("%d", &n);

    int arr[n];

    while(counter<n){
        if(i == 2){
            arr[counter]=i;
            counter++;
        }
        else{
            int j = 2;
            while(j<=(i/j)){
                if(i%j == 0){
                    break;
                }
                j++;
            }
            if(j>(i/j)){
                arr[counter]=i;
                counter++;
            }
        }
        i++;
    }

    for(int m=0; m<n; m++){
        printf("%d ", arr[m]);
    }

    return 0;
}