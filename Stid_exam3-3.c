#include <stdio.h>

int main(){
    int j, i =1, n=0;
    printf("Enter num : ");
    scanf("%d", &j);

    // // while do
    // while(i<=j){
    //     n += i;
    //     i++;
    // }

    //do while
    do {
        n+=i;
        i++;
    }
    while (i<=j);

    printf("Total : %d", n);

    return 0;
}