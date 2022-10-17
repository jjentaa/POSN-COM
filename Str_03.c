#include <stdio.h>
#include <string.h>

int main(){
    char str1[21];
    fgets(str1, 21, stdin);
    str1[strlen(str1)-1] = '\0';

    char str2[strlen(str1)];
    for(int i=strlen(str1)-1; i>=0; i--){
        str2[strlen(str1)-i-1]=str1[i];
    }

    printf("%s", str2);


    return 0;
}