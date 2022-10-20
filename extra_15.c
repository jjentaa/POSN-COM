#include <stdio.h>

int checkValue(int asc){
    if(asc>=48 && asc<=57){
        return asc-48;
    }
    else{
        return asc-55;
    }
}

int main(){
    int b;
    char num1[100], num2[100];
    scanf("%d", &b);
    scanf("%s", num1);
    scanf("%s", num2);

    int n1=0, n2=0;
    for(int y=0; num1[y]!='\0'; y++){
        n1 *= b;
        n1 += checkValue(num1[y]);
    }
    for(int y=0; num2[y]!='\0'; y++){
        n2 *= b;
        n2 += checkValue(num2[y]);
    }

    int total=n1+n2;
    char ans[1000];
    int index=0;
    while(total>=1){
        if(total%b<10){
            ans[index]=(total%b)+48;
        }
        else{
            ans[index]=(total%b)+55;
        }
        total /= b;
        index++;
    }

    for(int d=index-1; d>=0; d--){
        printf("%c", ans[d]);
    }

    return 0;
}