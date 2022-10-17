#include <stdio.h>
#include <string.h>

int main(){
    char str1[21];
    //scanf("%s", str1);
    fgets(str1, 21, stdin);
    str1[strlen(str1)-1] = '\0';

    for(int i=0; i<strlen(str1); i++){
        if(str1[i]>=97&&str1[i]<=122){
            printf("%c", str1[i]-32);
        }
        else{
            printf("%c", str1[i]);
        }
    }

    return 0;
}