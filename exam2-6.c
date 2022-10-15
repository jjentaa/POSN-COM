#include <stdio.h>

int main(){
    char sth;
    printf("Enter letter : ");
    scanf("%c", &sth);

    if(sth>90 && sth<65){
        printf("Invalid Input!");
    }
    else if(sth>112 && sth<97){
        printf("Invalid Input!");
    }
    else{
        if(sth>90){
            sth = sth-32;
        }
        else{
            sth = sth+32;
        }
        printf("%c", sth);
    }
    return 0;
}