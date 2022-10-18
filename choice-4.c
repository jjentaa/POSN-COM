#include <stdio.h>

int main(){
    char target[1000];
    printf("Input a string : ");
    gets(target);

    int n_target=0;
    char *p;
    for(p=target; *p!='\0'; p++){
        n_target++;
    }

    printf("Reverse of the string is : ");
    p = target;
    for(int i=n_target-1; i>=0; i--){
        printf("%c", *(p+i));
    }

    return 0;
}