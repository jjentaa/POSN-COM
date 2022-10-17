#include <stdio.h>
#include <string.h>

int main(){
    char str1[14];
    char ans[18];
    printf("Input Num : ");
    scanf("%s", str1);

    int p=0;
    int i=0;
    char y;
    while(p<17){
        y = str1[i];
        if(p==1 || p==6 || p==12 || p==15){
            ans[p] = '-';
        }
        else{
            ans[p] = str1[i];
            i++;
        }
        p++;
    }

    for(int u=0; u<17; u++){
        printf("%c", ans[u]);
    }

    return 0;
}