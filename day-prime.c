#include <stdio.h>

int main(){
    int n, i = 1, count=0;
    scanf("%d", &n);
    while(i<=n){
        if(i%n==0){
            count++;
        }
        i++;
    }
    if(count == 2){
        printf("Prime");
    }
    else{
        printf("Not prime");
    }

    return 0;
}