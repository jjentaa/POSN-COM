#include <stdio.h>
#include <math.h>

int main(){

    int j, glo_max=0;
    int counter = 0;
    while(1){
        printf("Enter num : ");
        scanf("%d", &j);
        if(j != 0){
            if(j == 2){
                if(j>glo_max){
                    glo_max=j;
                }
                counter++;
            }
            else{
                int l = 2;
                while(l<=floor(j/l)){
                    if(j%l == 0){
                        break;
                    }
                    l++;
                }
                if(l>floor(j/l)){
                    if(j>glo_max){
                        glo_max=j;
                    }
                    counter++;
                }
            }
        }
        else{
            break;
        }
    }

    printf("Max prime : %d\n", glo_max);
    printf("Count prime : %d\n", counter);

    return 0;
}