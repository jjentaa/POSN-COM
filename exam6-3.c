#include <stdio.h>
#include <string.h>

int main(){
    char name[100], sure[100], sex[7];
    char ans[100];

    printf("Input Name Surname Sex : ");
    scanf("%s %s %s", name, sure, sex);

    if(strlen(sex)>4){
        strcpy(ans, "Mrs.");
    }
    else{
        strcpy(ans, "Mr.");
    }

    strcat(ans, name);
    strcat(ans, " ");
    strcat(ans, sure);

    printf("%s", ans);

    return 0;
}