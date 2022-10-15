#include <stdio.h>

int main(){
    char j;
    printf("Enter upper chracter : ");
    scanf("%c", &j);

    for(int i=65; i<=j; i++){
        printf("%c\n", i);
    }
    return 0;
}