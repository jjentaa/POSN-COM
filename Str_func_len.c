#include <stdio.h>
#include <string.h>

int main(){
    char str1[]="Sample String";
    int len;
    len=strlen(str1);
    printf("%d\n", len);

    int counter=0;
    while(str1[counter]!='\0'){
        counter++;
    }
    printf("%d", counter);

    return 0;
}