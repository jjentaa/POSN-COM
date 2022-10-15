#include <stdio.h>

int main(){

    int base;
    float ot;
    char id[6];
    printf("Enter ID : ");
    scanf("%s", &id);

    printf("Enter base income : ");
    scanf("%d", &base);

    if(base >= 100000){
        ot = 0.1*base;
    }
    else if(base >= 70000){
        ot = 0.07*base;
    }
    else if(base >= 50000){
        ot = 0.05*base;
    }
    else if(base >= 30000){
        ot = 0.03*base;
    }
    else{
        ot = 0.01*base;
    }

    printf("Total = %.0f", base+ot);

    return 0;
}