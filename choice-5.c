#include <stdio.h>

int main(){
    int a[5]={0, 1, 2, 4, 0}, b[5]={0, 0, 7, 9, 5}, c[5];
    int *p1=a, *p2=b, *p3=c;

    int remain=0, result;
    for(int i=4; i>=0; i--){
        result = *(p1+i)+*(p2+i)+remain;
        *(p3+i) = result%10;
        remain = result/10;
    }

    for(int y=1; y<5; y++){
        printf("%d", *(p3+y));
    }

    return 0;
}