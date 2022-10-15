#include <stdio.h>

int main(){

    char id[10], name[10];
    int score;

    printf("Enter ID :");
    scanf("%s", &id);

    printf("Enter name :");
    scanf("%s", &name);

    printf("Enter score :");
    scanf("%d", &score);

    if(score > 79){
        printf("Grade = A");
    }
    else if(score > 69){
        printf("Grade = B");
    }
    else if(score > 59){
        printf("Grade = C");
    }
    else if(score > 49){
        printf("Grade = D");
    }
    else{
        printf("Grade = F");
    }

    return 0;
}