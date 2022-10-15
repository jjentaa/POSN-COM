#include <stdio.h>
#include <math.h>

int main(){
    int j, n=0;
    float avg=0;
    while(1){
        printf("Enter num : ");
        scanf("%d", &j);
        if(j != 0){
            if(j == 2){
                avg++;
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
                    avg ++;
                }
            }
            n++;
        }
        else{
            break;
        }
    }
    printf("Average : %.2f", avg/n);

    return 0;
}