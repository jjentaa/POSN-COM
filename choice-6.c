#include <stdio.h>

int main(){
    char num[1000];
    scanf("%s", num);

    char *p;
    int counter=0;
    for(p=num; *p!='\0'; p++){
        if(*p%2 == 1){
            counter++;
        }
    }
    printf("%d", counter);
    return 0;
}