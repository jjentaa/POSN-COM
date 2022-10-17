#include <stdio.h>
#include <string.h>

int main(){
    char str1[]="Sample string";
    // char str2[40];
    // char str3[40];
    // strcpy(str2, str1);
    // strcpy(str3, "copy sucessful");
    // printf("str : %s\nstr2 : %s\n", str1, str2);

    int counter=0;
    while(str1[counter]!='\0'){
        counter++;
    }

    char str4[40];
    for(int i=0; i<counter; i++){
        str4[i]=str1[i];
    }
    printf("str : %s\nstr4 : %s\n", str1, str4);

    return 0;
}