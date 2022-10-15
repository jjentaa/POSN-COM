#include <stdio.h>

int main(){
    int glo_min, glo_max;
    scanf("%d", &glo_max);
    scanf("%d", &glo_min);

    if(glo_max<glo_min){
        int u = glo_max;
        glo_max = glo_min;
        glo_min = u;
    }


    for(int i=0; i<8; i++){
        int j;
        scanf("%d", &j);
        if(j>glo_max){
            glo_max=j;
        }
        else if(j<glo_min){
            glo_min=j;
        }
    }

    printf("Min = %d\nMax = %d", glo_min, glo_max);
    
    return 0;
}