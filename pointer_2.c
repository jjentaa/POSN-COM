#include <stdio.h>
#include <string.h>


int main(){
    char target[1000];
    printf("Input a string: ");
    scanf("%s", &target);

    int vowel=0;
    char *t;
    for(t=target; *t!='\0'; t++){
        if(*t==65 || *t==97 || *t==69 || *t==101 || *t==73 || *t==105 || *t==79 || *t==111 || *t==85 || *t==17){
            vowel++;
        }
    }

    printf("Number of vowels : %d\n", vowel);
    printf("Number of constant : %d\n", strlen(target)-vowel);

    return 0;
}