#include <stdio.h>

int main(){

    int area;
    float cost;

    printf("Please input area : ");
    scanf("%d", &area);

    if(area<80){
        cost = area*12.50;
    }
    else if(area<200){
        cost = area*10;
    }
    else if(area<400){
        cost = area*7.50;
    }
    else{
        cost = area*5;
    }

    printf("Total service costs : %.0f baht", cost);

    return 0;
}