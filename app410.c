#include <stdio.h>

int main(){
    int col, n=-1, k;
    printf("Enter : ");
    scanf("%d", &col);

    for(int i=0; i<col; i++){
        if(n+i+1 >= 25){
            k = ((n+i+1)-25)%26;
            for(int m=k-1; m>=0; m--){
                printf("%c", (m%65)+65);
            }
            for(int l=i-k+1; l>0; l--){
                printf("%c", ((l+n)%65)+65);
            }
            n = k-1;
        }
        else{
            for(int j=i+1; j>0; j--){
                printf("%c", ((j+n)%65)+65);
            }
            n += i+1;
        }

        printf("\n");
    }

    return 0;
}