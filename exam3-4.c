#include <stdio.h>
#include <math.h>

int main(){
    int n, counter;
    printf("Enter number : ");
    scanf("%d", &n);


    for(int i=2; i<=n; i++){
        if(i == 2){
            printf("%d\n", i);
        }
        else{
            int j = 2;
            while(j<=floor(i/j)){
                if(i%j == 0){
                    break;
                }
                j++;
            }
            if(j>floor(i/j)){
                printf("%d \n", i);
                counter++;
            }
        }
    }
    printf("There are %d numbers.", counter);

    return 0;
}