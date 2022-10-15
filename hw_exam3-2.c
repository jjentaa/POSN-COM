#include <stdio.h>
#include <math.h>

void check_prime(int t){
    if(t == 2){
        printf("%d is prime number", t);
    }
    else{
        int j = 2;
        while(j<=floor(t/j)){
            if(t%j == 0){
                printf("%d is not prime number", t);
                break;
            }
            j++;
        }
        if(j>floor(t/j)){
            printf("%d is prime number", t);
        }
    }
}

int main(){
    int target;
    printf("Enter num : ");
    scanf("%d", &target);

    check_prime(target);

    return 0;
}