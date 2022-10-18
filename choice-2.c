#include <stdio.h>

int main(){
    char target[1000];
    char *p;

    gets(target);
    
    for(p=target; *p!='\0'; p++){
        if(*p>=97 && *p<=122){
            printf("%c", *p-32);
        }
        else{
            printf("%c", *p);
        }
    }

    return 0;
}