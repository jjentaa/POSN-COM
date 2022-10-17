#include <stdio.h>
#include <string.h>

int main(){
    char str1[21], str2[21];
    fgets(str1, 21, stdin);
    str1[strlen(str1)-1] = '\0';

    char t;

    for(int i=0; i<strlen(str1); i++){
        t = str1[i];
        if(t<=90 && t>=65){
            printf("%c", t+32);
        }
        else if(t<=122 && t>=97){
            printf("%c", t-32);
        }
    }

    return 0;
}