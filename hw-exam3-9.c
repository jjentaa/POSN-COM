#include <stdio.h>

int main(){
    char ta, ta2;
    printf("Please Enter Character : ");
    scanf("%c", &ta);

    if(ta>=65 && 90>=ta){
        ta2 = ta+32;
    }
    else{
        ta2 = ta-32;
    }

    if(ta>ta2){
        for(int a=65; a<=ta2; a++){
            printf("%c\t", a);
        }
        printf("\n");
        for(int b=97; b<=ta; b++){
            printf("%c\t", b);
        }
        printf("\n");
        for(int c=0; c<=((ta2-65)/2)-1; c++){
            printf("-\t");
        }
        printf("%d\t", ta2-65);
        for(int d=0; d<=((ta2-65)/2); d++){
            printf("-\t");
        }
    }
    else{
        for(int a=65; a<=ta; a++){
            printf("%c\t", a);
        }
        printf("\n");
        for(int b=97; b<=ta; b++){
            printf("%c\t", b);
        }
        printf("\n");
        for(int c=0; c<=((ta-65)/2)-1; c++){
            printf("-\t");
        }
        printf("%d\t", ta-65);
        for(int d=0; d<=((ta-65)/2); d++){
            printf("-\t");
        }
    }


    return 0;
}