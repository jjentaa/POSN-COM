#include <stdio.h>

int main(){
    int age;
    float amount, dok, ton, ratio;

    scanf("%d %f", &age, &amount);
    ton = amount;

    if(age<20){
        ratio = 0.15*0.07;
        dok = (0.07) - ratio;
    }
    else if(age<=49){
        ratio = 0.15*0.05;
        dok = (0.05) - ratio;
    }
    else{
        ratio = 0.15*0.03;
        dok = (0.03) - ratio;
    }
    age++;
    ton = ton*(1+dok);
    printf("%.2f\n", ton);

    if(age<20){
        ratio = 0.15*0.07;
        dok = (0.07) - ratio;
    }
    else if(age<=49){
        ratio = 0.15*0.05;
        dok = (0.05) - ratio;
    }
    else{
        ratio = 0.15*0.03;
        dok = (0.03) - ratio;
    }
    age++;
    ton = ton*(1+dok);
    printf("%.2f\n", ton);

    if(age<20){
        ratio = 0.15*0.07;
        dok = (0.07) - ratio;
    }
    else if(age<=49){
        ratio = 0.15*0.05;
        dok = (0.05) - ratio;
    }
    else{
        ratio = 0.15*0.03;
        dok = (0.03) - ratio;
    }
    age++;
    ton = ton*(1+dok);
    printf("%.2f\n", ton);

    return 0;
}