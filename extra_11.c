#include <stdio.h>

int main(){
    int num;
    scanf("%d", &num);

    while(num>=1){
        printf("%d", num%2);
        num /= 2;
    }

    return 0;
}