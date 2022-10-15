#include <stdio.h>
#include <stdlib.h>

int main(){
    int a[5]={-1, 6, 9, 2, -9};
    int b[5];
    int glo_max, glo_min;

    if(a[0]<a[1]){
        glo_max = a[1];
        glo_min = a[0];
    }
    else{
        glo_max = a[0];
        glo_min = a[1];
    }

    for(int i=0; i<5;i++){
        if(a[i]>glo_max){
            glo_max = a[i];
        }
        else if(a[i]<glo_min){
            glo_min = a[i];
        }
        b[i] = abs(a[i]);
    }

    printf("Max = %d\n", glo_max);
    printf("Min = %d\n", glo_min);

    for(int j=0; j<5; j++){
        printf("%d ", b[j]);
    }

    return 0;
}