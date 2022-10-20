#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int i=1, l, k=0;
    while(n>0){
        if(n-i>0){
            l=i;
        }
        else{
            l=n;
        }
        for(int j=0; j<l; j++){
            printf("%c", (k%26)+65);
            k++;
        }
        printf("\n");
        n -= i;
        i++;
    }

    return 0;
}