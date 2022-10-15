#include <stdio.h>

int main(){
    char t;
    printf("Enter chracter : ");
    scanf("%c", &t);

    if(t>=97){
        t -= 32;
    }

    for(int i=t; i>=65; i--){
        printf("%c\n", i);
    }

    return 0;
}