#include <stdio.h>
#include <string.h>

int main(){
    char s[100], b[2];
    int h, w, n;
    printf("Input String\t==> ");
    scanf("%s", s);
    printf("Height String\t==> ");
    scanf("%d", &h); //row of string
    printf("Width String\t==> ");
    scanf("%d", &w); //repeat time per row
    printf("Border Chracter\t==> ");
    scanf("%s", &b); 
    printf("Border Width\t==> ");
    scanf("%d", &n); //thickness

    int nlen = strlen(s), row=(n*2)+h;

    for(int i=0; i<row; i++){
        for(int j=0; j<n; j++){
            printf("%c", b[0]);
        }
        if(i<n || i>(n+h-1)){
            for(int k=0; k<(nlen)*w; k++){
                printf("%c", b[0]);
            }
        }
        else{
            for(int m=0; m<w; m++){
                printf("%s", s);
            }
        }
        for(int l=0; l<n; l++){
            printf("%c", b[0]);
        }
        printf("\n");
    }

    return 0;
}