#include <stdio.h>
#include <string.h>

int main(){
    char str1[80]="Hello";
    char str2[80]="HalLo";
    int cmp;
    cmp = strcmp(str1, str2);
    printf("cmp with string.h %d\n", cmp);

    int counter=0;
    while(str1[counter]!='\0'){
        counter++;
    }

    int j=0;

    while(j<counter){
        if((str1[j]-str2[j])!=0){
            j=str1[j]-str2[j];
            break;
        }
        j++;
    }

    printf("cmp without string.h %d", j);

    return 0;
}