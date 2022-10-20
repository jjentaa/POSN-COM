#include <stdio.h>

int main(){
    int glo_max=-1010, glo_min=1001, in;

    while(1){
        scanf("%d", &in);
        if(in != -1009){
            if(in > glo_max){
                glo_max = in;
            }
            if(in < glo_min){
                glo_min = in;
            }
        }
        else{
            break;
        }
    }
    printf("%d", glo_max-glo_min);

    return 0;
}