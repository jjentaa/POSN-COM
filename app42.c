#include <stdio.h>

int main(){
    int glo_max=1, glo_min=1, sum=0, n=0, user_input;
    float avg;
    while(1){

        printf("Enter number : ");
        scanf("%d", &user_input);

        if(0<user_input && 100>user_input)
        {
            if(user_input>glo_max){
                glo_max = user_input;
            }
            else if(user_input<glo_min){
                glo_min = user_input;
            }
            sum += user_input;
            n++;
            
        }
        else{
            printf("Invalid Input!");
            break;
        }
    }   

    avg = sum/n;

    printf("Max = %d\n", glo_max);
    printf("Min = %d\n", glo_min);
    printf("Sum = %d\n", sum);
    printf("Average = %f", avg);

    return 0;
}